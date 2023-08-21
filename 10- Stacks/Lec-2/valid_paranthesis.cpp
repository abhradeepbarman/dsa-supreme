#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {

        stack<char> st;
        
        for(int i=0; i<s.length(); i++) {
            char ch = s[i];
            
            //opening bracket
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                //closing bracket
                if(!st.empty()) {
                    char topCh = st.top();

                    if(ch == ')' && topCh == '(') {
                        //match
                        st.pop();
                    }
                    else if(ch == '}' && topCh == '{') {
                        //match
                        st.pop();
                    }
                    else if(ch == ']' && topCh == '[') {
                        //match
                        st.pop();
                    }
                    else {
                        //brackets not matching
                        return false;
                    }
                }
                else {
                    //invalid expr
                    return false;
                }
            }
        }

        if(st.empty()) {
            return true;
        }
        return false;
    }
};

int main()
{
    
    return 0;
}