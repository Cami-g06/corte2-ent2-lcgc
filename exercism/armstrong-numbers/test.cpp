#include "armstrong_numbers.h"
#include <cassert>
#include <iostream>

int main() {
    assert(armstrong_numbers::is_armstrong_number(9));
    assert(armstrong_numbers::is_armstrong_number(153));
    assert(!armstrong_numbers::is_armstrong_number(154));
    assert(armstrong_numbers::is_armstrong_number(9474));
    std::cout << "Armstrong Numbers: 4 pruebas correctas\n";
}
