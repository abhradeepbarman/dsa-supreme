#include<bits/stdc++.h>
using namespace std;

class Solution {
    void solve(vector<int>& candidates, int target, int i, vector<int>& path, vector<vector<int>>& ans) {
        if(target == 0) {
            ans.push_back(path);
            return;
        }
        if(i >= candidates.size() || target < 0) {
            return;
        }

        // include
        path.push_back(candidates[i]);
        solve(candidates, target-candidates[i], i, path, ans);
        path.pop_back();

        // exclude
        solve(candidates, target, i+1, path, ans);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> path;
        int i=0;

        solve(candidates, target, i, path, ans);
        return ans;
    }
};

int main()
{
    
    return 0;
}