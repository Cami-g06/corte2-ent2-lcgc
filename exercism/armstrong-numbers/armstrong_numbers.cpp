#include "armstrong_numbers.h"
#include <string>

namespace armstrong_numbers {
static int integer_power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) result *= base;
    return result;
}

bool is_armstrong_number(int number) {
    const std::string digits = std::to_string(number);
    const int exponent = static_cast<int>(digits.size());
    int sum = 0;
    for (char character : digits) {
        const int digit = character - '0';
        sum += integer_power(digit, exponent);
    }
    return sum == number;
}
}
