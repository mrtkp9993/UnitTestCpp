# Unit Test C++

Header-only simple unit-testing library for C++.

## Usage

Just include ```test.hpp``` in your app and use it like in ```main.cpp```:

```c++
#include <functional>

#include "test.hpp"

int main() {
    std::vector<std::function<bool()>> test_funcs = {
            []() { return 1 == 1; }, // TEST 1
            []() { return !(1 == 2); },   // TEST 2
            []() { return 1 == 2; } // TEST 3
    };

    Test tests(test_funcs);
    tests.Run();

    return 0;
}
```

Example result:

```
Test 3 FAILED
Run completed, # of failed tests/total tests: 1/3
```
