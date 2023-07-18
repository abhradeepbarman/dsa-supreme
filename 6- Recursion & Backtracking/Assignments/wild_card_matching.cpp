#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMatch_util(string& s, string& p, int si, int pi) {
        //base case
        if(si == s.size() && pi == p.size()) {
            return true;
        }
        if(si == s.size() && pi < p.size()) {
            while(pi < p.size()) {
                if(p[pi] != '*') {
                    return false;
                }
                pi++;
            }
            return true;
        }

        //single character matching
        if(s[si] == p[pi] || p[pi] == '?') {
            return isMatch_util(s, p, si+1, pi+1);
        }

        if(p[pi] == '*') {
            //treat '*' as empty or null
            bool caseA = isMatch_util(s, p, si, pi+1);

            //let '*' consume one char.
            bool caseB = isMatch_util(s, p, si+1, pi);

            return caseA || caseB;
        }
        //char doesn't match
        return false;
    }

    bool isMatch(string s, string p) {
        int si = 0;  //pointer index for s string
        int pi = 0;  //pointer index for p string

        return isMatch_util(s, p, si, pi);
    }
};

int main()
{
    
    return 0;
}