# Chop

A super-simple header-only zero-overhead wrapper providing `print()` and `printLine()` functions on top of the standard `<iostream>` C++ library, for output purposes.

## Showcase

```cpp
#include "chop.hpp"

using namespace MAChitgarha::Chop;

int main()
{
    const int
        x = 313,
        y = 0;

    std::co

    printLine(x, " + ", y, " == ", x + y);
    printLine();

    return 0;
}
```

## So std::cout is bad?

Certainly not. It is all about a matter of taste. You may prefer `std::cout`. Yes, `std::cout` is just good, but the function form makes me and my fingers happy.

## Miscellaneous

### So, chop is another Persian word?

Hmm... Yes. It is identical to print.
