#include<bits/stdc++.h>
using namespace std;

void reverseStr(string& str, int s, int e) {

    //base case
    if(s > e) {
        return;
    }

    swap(str[s], str[e]);

    reverseStr(str, s+1, e-1);
}

int main()
{
    string str = "abcd";
    int s = 0;
    int e = str.length()-1;

    cout << str << endl;
    reverseStr(str, s, e);
    cout << str << endl;
    
    return 0;
}