#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> st;

        for(auto ch: s) {
            
            if(s.empty()) {
                st.push(ch);
            }
            else if( !st.empty() && ch == st.top()) {
                //pair up
                st.pop();
            }
            else {
                st.push(ch);
            }
        }

        string ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    
    return 0;
}