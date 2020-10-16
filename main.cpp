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
