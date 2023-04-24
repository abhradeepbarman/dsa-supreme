#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string& str, int s, int e) {

    //base case
    if(s > e)
        return true;
    
    if(str[s] != str[e])
        return false;
    
    isPalindrome(str, s+1, e-1);
}

int main()
{
    string str = "raceca";
    int s = 0;
    int e = str.length()-1;

    bool ans = isPalindrome(str, s, e);

    if(ans)
        cout << "palindrome string" << endl;
    else 
        cout << "not palindrome string" << endl;

    return 0;
}