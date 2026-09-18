#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimumPrice = prices[0];
        int bestProfit = 0;
        for (int price : prices) {
            bestProfit = max(bestProfit, price - minimumPrice);
            minimumPrice = min(minimumPrice, price);
        }
        return bestProfit;
    }
};
