#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solveRE(vector<int>& prices, int i, int& minPrice, int& maxProfit) {
        // base case
        if(i >= prices.size()) {
            return;
        }

        minPrice = min(minPrice, prices[i]);
        int profit = prices[i] - minPrice;
        maxProfit = max(maxProfit, profit);

        solveRE(prices, i+1, minPrice, maxProfit);     
    }

    int maxProfit(vector<int>& prices) {
        int i = 0;
        int minPrice = prices[0];
        int maxProfit = INT_MIN;

        solveRE(prices, i, minPrice, maxProfit);
        return maxProfit;
    }
};

int main()
{
    
    return 0;
}