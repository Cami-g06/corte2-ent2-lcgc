#include <string>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long result = 0;
        for (char letter : columnTitle) {
            result = result * 26 + (letter - 'A' + 1);
        }
        return static_cast<int>(result);
    }
};
