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
        /**
         * Prints one value to the console output.
         */
        template<typename T>
        constexpr static inline void print(T arg)
        {
            std::cout << arg;
        }

        /**
         * Prints arbitrary values to the console output.
         */
        template<typename T, typename ...Args>
        constexpr inline void print(T firstArg, Args... args)
        {
            print(firstArg);
            print(args...);
        }

        /**
         * Prints arbitrary values to the console output with a leading new line.
         */
        template<typename T, typename ...Args>
        constexpr inline void printLine(T firstArg, Args... args)
        {
            print(firstArg, args...);
            print(_NEW_LINE);
        }

        /**
         * Prints a new empty line.
         */
        constexpr inline void printLine()
        {
            print(_NEW_LINE);
        }
    }
}

// Preventing possible conflictions
#undef _NEW_LINE

#endif // MACHITGARHA_CHOP_HPP
