#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
        string str;
        
        int i = n-1;
        int j = m-1;
        
        int carry = 0;
        
        while(i>=0 && j>=0) {
            
            int sum = a[i] + b[j] + carry;
            carry = sum / 10;
            sum = sum % 10;
            str.push_back(sum + '0');
            i--, j--;
        }
        
        // first case
        while(i >= 0) {
            int sum = a[i] + carry;
            carry = sum / 10;
            sum = sum % 10;
            str.push_back(sum + '0');
            i--;
        }
        
        // second case
        while(j >= 0) {
            int sum = b[j] + carry;
            carry = sum / 10;
            sum = sum % 10;
            str.push_back(sum + '0');
            j--;
        }
        
        // third case
        if(carry) {
            str.push_back(carry + '0');
        }
        
        // removing zeros
        while(str[str.size()-1] == '0')
            str.pop_back();
        
        // reverse string
        reverse(str.begin(), str.end());
        
        return str;
    }
};

int main()
{
    
    return 0;
}