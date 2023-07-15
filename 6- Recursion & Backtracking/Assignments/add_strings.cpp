#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(string& num1, string& num2, int& i, int& j, int& carry, string& ans) {

        //base case
        if(i < 0 && j < 0) {
            if(carry != 0) {
                ans.push_back(carry + '0');
            }

            return;
        }

        //processing
        int n1 = (i>=0 ? num1[i] : '0') - '0';
        int n2 = (j>=0 ? num2[j] : '0') - '0';

        int sum = n1 + n2 + carry;
        ans.push_back((sum%10) + '0');
        carry = sum / 10;

        //R.R
        i = i-1;
        j = j-1;
        solve(num1, num2, i, j, carry, ans);
    }

    string addStrings(string num1, string num2) {
        int i = num1.length()-1;
        int j = num2.length()-1;
        int carry = 0;
        string ans;


        //calculate
        solve(num1, num2, i, j, carry, ans);
        
        //reverse ans
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    
    return 0;
}