#include <cassert>
#include <iostream>
#include <vector>
#include "solution.cpp"

int main() {
    Solution solution;
    std::vector<int> a{2, 7, 11, 15};
    std::vector<int> b{3, 2, 4};
    std::vector<int> c{3, 3};
    assert((solution.twoSum(a, 9) == std::vector<int>{0, 1}));
    assert((solution.twoSum(b, 6) == std::vector<int>{1, 2}));
    assert((solution.twoSum(c, 6) == std::vector<int>{0, 1}));
    std::cout << "Two Sum: 3 pruebas correctas\n";
}
