#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void maxProfit_util(vector<int>& prices, int i, int& min_price, int& max_profit) {
        //base case
        if(i == prices.size()) {
            return;
        }

        //solve for 1 case
        if(prices[i] < min_price)   min_price = prices[i];
        int profit = prices[i] - min_price;
        if(profit > max_profit)     max_profit =  profit;

        //RE
        maxProfit_util(prices, i+1, min_price, max_profit);        
    }

    int maxProfit(vector<int>& prices) {
        int i = 0;
        int min_price = INT_MAX;
        int max_profit = INT_MIN;

        maxProfit_util(prices, i, min_price, max_profit);

        return max_profit;
    }
};

int main()
{
    
    return 0;
}