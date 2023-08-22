#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    private:
    bool knows(vector<vector<int> >& M, int a, int b) {
        if(M[a][b] == 1) {
            return true;
        }
        return false;
    }
    
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        
        //STEP 1: push all elements in stack
        for(int i=0; i<n; i++) {
            s.push(i);
        }
        
        //STEP 2: 
        
        while(s.size() > 1) {
            
            int a = s.top(); 
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b)) {
                //b is not a celeb
                s.push(b);
            }
            else {
                s.push(a);
            }
        }
        
        // STEP 3:single element in stack is a potential celebrity
        // so verify it
        int candidate = s.top();
        
        //row check
        int zeroCount = 0;
        
        for(int i=0; i<n; i++) {
            if(M[candidate][i] == 0) {
                zeroCount++;
            }
        }
        
        //all zeroes
        if(zeroCount != n) {
            return -1;
        }
        
        //column check
        int oneCount = 0;
        
        for(int i=0; i<n; i++) {
            if(M[i][candidate] == 1) {
                oneCount++;
            }
        }
        
        if(oneCount != n-1) {
            return -1;
        }
        
        return candidate;
    }
};