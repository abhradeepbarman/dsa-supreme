#include<bits/stdc++.h>
using namespace std;

//Method 1: Left to Right
// void lastOccur(string str, char ch, int i, int& pos) {

//     //base case
//     if(i >= str.length()) {
//         return;
//     } 
    
//     if(str[i] == ch) {
//         pos = i;
//     }

//     return lastOccur(str, ch, i+1, pos);
// }

int lastOccur(string str, char ch, int i) {

    //base case
    if(i == 0) {
        return -1;
    }

    if(str[i] == ch) {
        return i;
    }

    return lastOccur(str, ch, i-1);
}

int main()
{
    string str = "abbabc";
    char ch = 'b';
    // int pos = -1;
    // int i = 0;
    int i = str.length()-1;

    // lastOccur(str, ch, i, pos);
    // cout << "last occurrence = " << pos << endl;

    int ans = lastOccur(str, ch, i);
    cout << "last occurrence = " << ans << endl;
    
    return 0;
}