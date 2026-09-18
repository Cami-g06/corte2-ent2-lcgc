#include <cassert>
#include <iostream>
#include "solution.cpp"

int main() {
    Solution solution;
    assert(solution.titleToNumber("A") == 1);
    assert(solution.titleToNumber("AB") == 28);
    assert(solution.titleToNumber("ZY") == 701);
    std::cout << "Excel Sheet Column Number: 3 pruebas correctas\n";
}
