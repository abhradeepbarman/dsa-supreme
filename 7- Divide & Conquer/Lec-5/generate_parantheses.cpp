#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<string>& ans, int open, int close, string& output) {
        //base case
        if(open == 0 && close == 0) {
            ans.push_back(output);
            return;
        }

        //include opening bracket
        if(open > 0) {
            output.push_back('(');
            solve(ans, open-1, close, output);
            
            //backtrack
            output.pop_back();
        }

        //include closing bracket
        if(close > open) {
            output.push_back(')');
            solve(ans, open, close-1, output);

            //backtrack
            output.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open = n;
        int close = n;
        string output = "";

        solve(ans, open, close, output);

        return ans;
    }
};

int main()
{
    
    return 0;
}