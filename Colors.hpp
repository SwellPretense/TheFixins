#ifndef COLORS_HPP
#define COLORS_HPP

#include "Source.hpp"

class Colors {
public:
    class Console 
    {
    public:
        static constexpr const char* RED = "\033[31m";
        static constexpr const char* GREEN = "\033[32m";
        static constexpr const char* YELLOW = "\033[33m";
        static constexpr const char* BLUE = "\033[34m";
        static constexpr const char* MAGENTA = "\033[35m";
        static constexpr const char* CYAN = "\033[36m";
        static constexpr const char* RESET = "\033[0m";
    };  
};

#endif // COLORS_HPP