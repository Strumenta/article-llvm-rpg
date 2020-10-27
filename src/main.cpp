#include <iostream>
#include <vector>
#include <rpg/log.h>


#include "rpg/compiler.h"
#include "utils/optionparser.h"
enum  optionIndex { UNKNOWN, HELP, DEBUG, LOG };
const option::Descriptor usage[] =
        {
                {UNKNOWN, 0, "", "",option::Arg::None, "USAGE: rpg [options]\n\n"
                                                       "Options:" },
                {HELP, 0,"", "help",option::Arg::None, "  --help  \tPrint usage and exit." },
                {DEBUG, 0,"", "debug",option::Arg::None, "  --debug  \tGenerate debug info" },
                {LOG , 0,"", "log",option::Arg::Optional, "  --log  \tGenerate log information" },
                {UNKNOWN, 0, "", "",option::Arg::None, "\nExamples:\n"

                                                       "  rpg file.rpgle\n" },
                {0,0,0,0,0,0}
        };


bool LogMessage::enable = false;
int main(int argc, char *argv[]) {
    Compiler rpg;

    // skip program name argv[0] if present
    argc-=(argc>0); argv+=(argc>0);
    option::Stats  stats(usage, argc, argv);
    std::vector<option::Option> options(stats.options_max);
    std::vector<option::Option> buffer(stats.buffer_max);
    option::Parser parse(usage, argc, argv, &options[0], &buffer[0]);

    if (parse.error())
        return 1;

    if (options[HELP] || argc == 0) {
        option::printUsage(std::cout, usage);
        return 0;
    }

    if(options[DEBUG]) {
        rpg.setEmitDebugInfo(true);
    }
    if(options[LOG]) {
        rpg.setEmitLogInfo(true);
    }
    for (int i = 0; i < parse.nonOptionsCount(); ++i) {
        rpg.addSource(parse.nonOption(i));
    }

    int exit_code = rpg.compile();

    exit(exit_code);
}
