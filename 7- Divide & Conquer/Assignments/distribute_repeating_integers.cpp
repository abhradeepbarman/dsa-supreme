#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool solve(vector<int>& quantity, unordered_map<int,int>& hash, int i) {
        if(i >= quantity.size()) {
            return true;
        }

        for(auto& it: hash) {
            if(it.second >= quantity[i]) {
                // include
                it.second -= quantity[i];
                if(solve(quantity, hash, i+1)) {
                    return true;
                }
                it.second += quantity[i];
            }
        }
        return false;
    }

public:
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int, int> hash;
        for(auto it: nums) {
            hash[it]++;
        } 

        int i=0;
        sort(quantity.rbegin(), quantity.rend());   // sort DESC. give the big quantity first -- this will help me finding false answer faster
        return solve(quantity, hash, i);
    }
};

int main()
{
    
    return 0;
}