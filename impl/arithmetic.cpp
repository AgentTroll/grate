#include <iostream>
#include "../lib/arithmetic.h"

int add(int a, int b) {
    std::cout << "Executed C++: ";
    return a + b;
}

int sub(int a, int b) {
    std::cout << "Executed C++: ";
    return a - b;
}

int mul(int a, int b) {
    std::cout << "Executed C++: ";
    return a * b;
}

double divide(int a, int b) {
    std::cout << "Executed C++: ";
    auto da = (double) a;
    auto db = (double) b;

    return da / db;
}
