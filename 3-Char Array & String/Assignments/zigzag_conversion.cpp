#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        //edge case
        if(numRows == 1)    return s;

        vector<string> ans(numRows);

        bool flag = false;
        int i = 0;

        for(auto ch: s) {
            ans[i] += ch;

            if(i == 0 || i == numRows-1) {
                flag = !flag;
            }
            if(flag) {
                i = i+1;
            }
            else {
                i = i -1;
            }            
        }

        string zigzag = "";
        for(auto str: ans) {
            zigzag += str;
        }

        return zigzag;
    }
};

int main()
{
    
    return 0;
}