//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    //edge case
    // if odd size string --> then impossible to make pairs
    if(s.length() % 2 != 0)   
        return -1;
    
    stack<char> st;
    
    for(auto ch: s) {
        if(ch == '{') {
            st.push(ch);
        }
        else {
            if(!st.empty() && st.top() == '{') {
                st.pop();
            }
            else {
                st.push(ch);
            }
        }
    }
    
    int count = 0;
    
    //if stack is still not empty, let's count reversals;
    while(!st.empty()) {
        char a = st.top();
        st.pop();
        
        char b = st.top();
        st.pop();
        
        if(a == b) {
           count += 1; 
        } 
        else {
            count += 2;
        }
    }
    
    return count;
}