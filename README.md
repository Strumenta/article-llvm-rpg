# A tutorial on how to write a compiler using LLVM


java -cp ./bin/antlr-4.8-complete.jar org.antlr.v4.Tool -Dlanguage=Cpp -listener -visitor -o src/generated/ -Xexact-output-dir -package antlrcpprpg src/antlr/RpgLexer.g4 src/antlr/RpgParser.g4
