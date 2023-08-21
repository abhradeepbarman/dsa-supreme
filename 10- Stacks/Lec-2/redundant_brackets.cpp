#include<bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> st;

    for(int i=0; i<s.length(); i++) {
        char ch = s[i];

        if(ch >= 'a' && ch <= 'z') {
            continue;
        }
        else {
            if(ch == ')') {
                bool flag = false;
                    
                while(st.top() != '(' && !st.empty()) {
                    if(st.top() == '+' || st.top() == '-' || 
                        st.top() == '*' || st.top() == '/') {

                        flag = true;
                    }

                    st.pop();
                }
                st.pop();

                if(!flag) {
                    return true;
                }
            }
            else {
                st.push(ch); 
            }
        }
    }
    return false;
}


int main()
{
    
    return 0;
}