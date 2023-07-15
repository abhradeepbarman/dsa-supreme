#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findMax(vector<int>& nums, int i, int sum, int& maxi) {
        //base case
        if(i >= nums.size()){
            maxi = max(maxi, sum);
            return;
        }

        //exclude
        findMax(nums, i+1, sum, maxi);

        //include
        sum += nums[i];
        findMax(nums, i+2, sum, maxi);
    }

    int rob(vector<int>& nums) {
       int i = 0;
       int sum = 0;
       int maxi = INT_MIN;

        findMax(nums, i, sum, maxi);
        return maxi;
    }
};

int main()
{
    
    return 0;
}