#ifndef MACHITGARHA_CHOP_HPP
#define MACHITGARHA_CHOP_HPP

#include <iostream>

#ifdef _WIN32
    #define _NEW_LINE "\r\n"
#else
    #define _NEW_LINE "\n"
#endif

namespace MAChitgarha
{
    namespace Chop
    {
        template<typename T>
        constexpr static inline void print(T arg)
        {
            std::cout << arg;
        }

        template<typename T, typename ...Args>
        constexpr inline void print(T firstArg, Args... args)
        {
            print(firstArg);
            print(args...);
        }

        template<typename T, typename ...Args>
        constexpr inline void printLine(T firstArg, Args... args)
        {
            print(firstArg, args...);
            print(_NEW_LINE);
        }

        constexpr inline void printLine()
        {
            print(_NEW_LINE);
        }
    }
}

// Preventing possible conflictions
#undef _NEW_LINE

#endif // MACHITGARHA_CHOP_HPP
