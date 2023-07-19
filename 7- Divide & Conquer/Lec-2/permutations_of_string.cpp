#include<bits/stdc++.h>
using namespace std;

void printPermutations(string& str, int i) {

    //base case
    if(i >= str.length()) {
        cout << str << " ";
        return;
    }

    //swapping
    for(int j=i; j<str.length(); j++) {
        //swap
        swap(str[i], str[j]);
        //rec. call
        printPermutations(str, i+1);
        //backtracking -- to recreate the original input string
        swap(str[i], str[j]);
    }
}

int main()
{
    string str = "abc";
    int i = 0;
    
    printPermutations(str, i);

    return 0;
}