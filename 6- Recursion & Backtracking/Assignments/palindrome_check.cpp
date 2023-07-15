#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string& str, int s, int e) {

    //base case
    if(s >= e) {
        return true;
    }

    //processing
    if(str[s] != str[e]) {
        return false;
    }

    return checkPalindrome(str, s+1, e-1);
}

int main()
{
    string str = "abcbac";
    int s = 0;
    int e = str.length()-1;

    bool ans = checkPalindrome(str, s, e);

    if(ans) {
        cout << "palindromic string" << endl;
    }
    else {
        cout << "not a palindromic string" << endl;
    }
    
    return 0;
}