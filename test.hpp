#ifndef TEST_HPP
#define TEST_HPP

#include <functional>
#include <iostream>
#include <vector>

class Test {
private:
    std::vector<std::function<bool()>> tests;
    int                                n_tests;
    int                                n_tests_passed;

public:
    Test(std::vector<std::function<bool()>> tests_vector) {
        tests          = tests_vector;
        n_tests        = tests_vector.size();
        n_tests_passed = 0;
    }

    void Run() {
        for (int i = 0; i < n_tests; i++) {
            bool res = tests[i]();
            if (res) {
                n_tests_passed++;
            } else {
                std::cout << "Test " << i + 1 << " FAILED\n";
            }
        }
        std::cout << "Run completed, # of failed tests/total tests: "
                  << n_tests - n_tests_passed << "/" << n_tests << std::endl;
    }
};

#endif
