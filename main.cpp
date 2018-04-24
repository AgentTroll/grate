#include "lib/arithmetic.h"
#include <iostream>

int main() {
    std::cout << "3 + 5 = " << add(3, 5) << std::endl;
    std::cout << "3 - 5 = " << sub(3, 5) << std::endl;
    std::cout << "3 * 5 = " << mul(3, 5) << std::endl;
    std::cout << "354 / 3 = " << divide(354, 3) << std::endl;
    return 0;
}