#include <cassert>
#include <iostream>
#include <vector>
#include "solution.cpp"

int main() {
    Solution solution;
    std::vector<int> a{7, 1, 5, 3, 6, 4};
    std::vector<int> b{7, 6, 4, 3, 1};
    std::vector<int> c{1, 2};
    assert(solution.maxProfit(a) == 5);
    assert(solution.maxProfit(b) == 0);
    assert(solution.maxProfit(c) == 1);
    std::cout << "Best Time to Buy and Sell Stock: 3 pruebas correctas\n";
}
