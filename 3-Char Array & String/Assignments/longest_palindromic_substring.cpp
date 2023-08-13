#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // bool isPalindrome(string& s, int i, int j) {

    //     while(i <= j) {
    //         if(s[i] != s[j]) {
    //             return false;
    //         }
    //         i++, j--;
    //     }
    //     return true;
    // }

    void expand(string& s, int i, int j, string& ans) {

        while(i>=0 && j<s.length() && s[i] == s[j]) {

            string t = s.substr(i, j-i+1);
            ans = t.length() > ans.length() ? t : ans;
            i--, j++;
        }
    }

    string longestPalindrome(string s) {
        // string ans;

        // for(int i=0; i<s.length(); i++) {
        //     for(int j=i; j<s.length(); j++) {
        //         if(isPalindrome(s, i, j)) {
        //             string t = s.substr(i, j-i+1);
        //             ans = t.size() > ans.length() ? t : ans;
        //         }
        //     }
        // }

        // return ans;



        //METHOD 2
        string ans, temp1, temp2;

        for(int i=0; i<s.length(); i++) {
            //odd
            expand(s, i, i, ans);

            //even
            expand(s, i, i+1, ans);
        }

        return ans;
    }
};

int main()
{
    
    return 0;
}