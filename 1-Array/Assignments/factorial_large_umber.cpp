#include<bits/stdc++.h>
using namespace std;

//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        vector<int> ans;
        ans.push_back(1);
        int carry = 0;
        
        for(int i=2; i<=N; i++) {
            for(int j=0; j<ans.size(); j++) {
                int x = i * ans[j] + carry;
                carry = x / 10;
                ans[j] = x % 10;
            }
            
            // carry is remaining
            while(carry != 0){
                ans.push_back(carry % 10);
                carry = carry / 10;
            }
            
            
            carry = 0;
        }
        
        // reverse
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};

int main()
{
    
    return 0;
}