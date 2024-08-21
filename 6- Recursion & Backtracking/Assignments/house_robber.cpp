#include<bits/stdc++.h>
using namespace std;

class Solution {
    int rob_util(vector<int>& nums, int i) {
        //base case
        if(i >= nums.size()) {
            return 0;
        }

        // solve for 1 case
        int robAmt1 = nums[i] + rob_util(nums, i+2);    // include
        int robAmt2 = rob_util(nums, i+1);              // exclude

        return max(robAmt1, robAmt2);
    }

public:
    int rob(vector<int>& nums) {
        return rob_util(nums, 0);
    }
};

int main()
{
    
    return 0;
}