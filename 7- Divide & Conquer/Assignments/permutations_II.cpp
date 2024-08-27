#include<bits/stdc++.h>
using namespace std;

class Solution {
    void solve(vector<int>& nums, int i, set<vector<int>>& ans) {
        if(i >= nums.size()) {
            ans.insert(nums);
            return;
        }

        for(int j=i; j<nums.size(); j++) {
            swap(nums[i], nums[j]);
            solve(nums, i+1, ans);
            swap(nums[i], nums[j]);
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        int i=0;
        solve(nums, i, ans);

        vector<vector<int>> finalAns;
        for(auto it: ans) {
            finalAns.push_back(it);
        }

        return finalAns;
    }
};

int main()
{
    
    return 0;
}