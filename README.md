# Chop

A super-simple header-only zero-overhead wrapper providing `print()` and `printLine()` functions on top of the standard `<iostream>` C++ library, for output purposes.

## Showcase

```cpp
#include "chop.hpp"

using namespace MAChitgarha::Chop;

int main()
{
    printLine("The only one-digit prime numbers are:");

    print("2");
    for (int i : {3, 5, 7}) {
        print(", ", i);
    }
    printLine();

    return 0;
}
```

## So std::cout is bad?

Certainly not. It is all about a matter of taste. You may prefer `std::cout`. Yes, `std::cout` is just good, but the function form makes me and my fingers happy.

Also note that, Chop uses `std::cout` under the hood.

## Miscellaneous

### So, chop is another Persian word?

Hmm... Yes. It is identical to print.
