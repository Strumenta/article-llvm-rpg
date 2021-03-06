
#ifndef LLVM_EXECUTIONENGINE_ORC_RPGJIT_H
#define LLVM_EXECUTIONENGINE_ORC_RPGJIT_H

#include "llvm/ADT/StringRef.h"
#include "llvm/ExecutionEngine/JITSymbol.h"
#include "llvm/ExecutionEngine/Orc/CompileUtils.h"
#include "llvm/ExecutionEngine/Orc/Core.h"
#include "llvm/ExecutionEngine/Orc/ExecutionUtils.h"
#include "llvm/ExecutionEngine/Orc/IRCompileLayer.h"
#include "llvm/ExecutionEngine/Orc/JITTargetMachineBuilder.h"
#include "llvm/ExecutionEngine/Orc/RTDyldObjectLinkingLayer.h"
#include "llvm/ExecutionEngine/SectionMemoryManager.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/LLVMContext.h"
#include <memory>

namespace llvm {
    namespace orc {

        class RpgJIT {
        private:
            ExecutionSession ES;
            RTDyldObjectLinkingLayer ObjectLayer;
            IRCompileLayer CompileLayer;

            DataLayout DL;
            MangleAndInterner Mangle;
            ThreadSafeContext Ctx;

            JITDylib &MainJD;

        public:
            RpgJIT(JITTargetMachineBuilder JTMB, DataLayout DL)
                    : ObjectLayer(ES,
                                  []() { return std::make_unique<SectionMemoryManager>(); }),
                      CompileLayer(ES, ObjectLayer,
                                   std::make_unique<ConcurrentIRCompiler>(std::move(JTMB))),
                      DL(std::move(DL)), Mangle(ES, this->DL),
                      Ctx(std::make_unique<LLVMContext>()),
                      MainJD(ES.createBareJITDylib("<main>")) {
                MainJD.addGenerator(
                        cantFail(DynamicLibrarySearchGenerator::GetForCurrentProcess(
                                DL.getGlobalPrefix())));
            }

            static Expected<std::unique_ptr<RpgJIT>> Create() {
                auto JTMB = JITTargetMachineBuilder::detectHost();

                if (!JTMB)
                    return JTMB.takeError();

                auto DL = JTMB->getDefaultDataLayoutForTarget();
                if (!DL)
                    return DL.takeError();

                return std::make_unique<RpgJIT>(std::move(*JTMB), std::move(*DL));
            }

            const DataLayout &getDataLayout() const { return DL; }

            LLVMContext &getContext() { return *Ctx.getContext(); }

            Error addModule(std::unique_ptr<Module> M) {
                return CompileLayer.add(MainJD, ThreadSafeModule(std::move(M), Ctx));
            }

            Expected<JITEvaluatedSymbol> lookup(StringRef Name) {
                return ES.lookup({&MainJD}, Mangle(Name.str()));
            }
        };

    } // end namespace orc
} // end namespace llvm

#endif