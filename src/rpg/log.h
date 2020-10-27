//
// Created by madytyoo on 3/2/20.
//

#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


struct nullstream : std::ostream {
    nullstream() : std::ostream(0) {}
};

template<typename T>
nullstream &operator<<(nullstream &o, T const &x) { return o; }


class LogMessage {
    std::string level;
    std::ostream &ofs;
    nullstream __nullstream;
    static bool enable;
public:
    static void setEnable(bool en) {
        LogMessage::enable = en;
    }
    LogMessage(const std::string &l)
            : level(l), ofs(LogMessage::enable ? std::cout : __nullstream) {
        stream() << "[" << level << "]\t";
        //stream() << "";
    }

    LogMessage(std::ostream &o)
            : level("ERROR"), ofs(o) {
        stream() << "[" << level << "]\t";
    }

    inline std::ostream &stream() {
        return ofs;
    }

    ~LogMessage() {
        stream() << std::endl;
    }
};


#define LOG(type)        LogMessage(#type).stream()

