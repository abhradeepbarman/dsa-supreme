#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        
        //METHOD 1: Iterative Way
        // while(s.find("abc") != string::npos) {
        //     int pos = s.find("abc");
        //     s.erase(pos, 3);
        // }

        // if(s.empty()) {
        //     return true;
        // }
        // return false;





        //METHOD 2: RECURSIVE WAY
        // if(s.size() == 0) {
        //     return true;
        // }

        // int pos = s.find("abc");
        // if(pos != string::npos) {
        //     //found
        //     string tleft = s.substr(0, pos);
        //     string tright = s.substr(pos+3, s.size());

        //     return isValid(tleft + tright);
        // }
        // return false;




        //METHOD 3:
        if(s[0] != 'a') 
            return false;

        stack<char> st;

        for(auto ch: s) {
            
            if(ch == 'a') {
                st.push(ch);
            }
            else if(ch == 'b') {
                if(!st.empty() && st.top() == 'a') {
                    st.push(ch);
                }
                else {
                    return false;
                }
            }
            else {
                //ch == 'c'
                if(!st.empty() && st.top() == 'b') {
                    st.pop();
                    st.pop();

                    //we can pop 2 times(a & b)
                    //if top element of stack is 'b'. 
                    //Prev condition ensures that there is 'a' before 'b'. so we dont need to check again.


                    // if(!st.empty() && st.top() == 'a') {
                    //     st.pop();
                    // }
                    // else {
                    //     return false;
                    // }
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main()
{
    
    return 0;
}