#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<int> st;
        st.push(-1);
        
        int maxLen = 0;

        for(int i=0; i<s.length(); i++) {

            if(s[i] == '(') {
                st.push(i);
            }
            else {
                st.pop();

                if(st.empty()) {
                    st.push(i);
                }
                else {
                    int len = i - st.top();
                    maxLen = max(maxLen, len);
                }
            }
        }
        return maxLen;
    }
};

int main()
{
    
    return 0;
}