#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int i=0;

        while(i < s.length()) {

            if((ans.empty() == 0) && (ans[ans.length()-1] == s[i])) {
                ans.pop_back();
            }
            else {
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}