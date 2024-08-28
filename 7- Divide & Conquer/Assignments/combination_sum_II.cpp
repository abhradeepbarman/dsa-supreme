#include<bits/stdc++.h>
using namespace std;

class Solution {
    void solve(vector<int>& candidates, int target, int i, vector<int>& path, set<vector<int>>& ans) {
        if(target == 0) {
            ans.insert(path);
            return;
        }
        if(i >= candidates.size() || target < 0) {
            return;
        }

        // pick
        path.push_back(candidates[i]);
        solve(candidates, target-candidates[i], i+1, path, ans);
        path.pop_back();

        // not pick
        while(i+1 < candidates.size() && candidates[i] == candidates[i+1])
            i++;
        solve(candidates, target, i+1, path, ans);
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        set<vector<int>> ans;
        vector<int> path;
        int i=0;

        solve(candidates, target, i, path, ans);

        vector<vector<int>> final;
        for(auto it: ans) {
            final.push_back(it);
        }

        return final;
    }
};

int main()
{
    
    return 0;
}