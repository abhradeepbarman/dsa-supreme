#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<string>& ans, int i, string& output, string& digits, vector<string>& v) {
        //base case
        if(i >= digits.length()) {
            ans.push_back(output);
            return;
        }

        int num = digits[i] - '0';
        string value = v[num];

        for(int j=0; j<value.length(); j++) {
            //include
            char ch = value[j];
            output.push_back(ch);
            //recursive call
            solve(ans, i+1, output, digits, v);
            //backtrack
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0) {
            return ans;
        }

        int i = 0;
        string output = "";

        //mapping
        vector<string> v(10);
        v[2] = "abc";
        v[3] = "def";
        v[4] = "ghi";
        v[5] = "jkl";
        v[6] = "mno";
        v[7] = "pqrs";
        v[8] = "tuv";
        v[9] = "wxyz";

        solve(ans, i, output, digits, v);

        return ans;
    }
};

int main()
{
    
    return 0;
}