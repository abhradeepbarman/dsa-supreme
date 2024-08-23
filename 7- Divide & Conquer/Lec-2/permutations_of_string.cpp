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
        swap(str[i], str[j]);

        printPermutations(str, i+1);
        
        swap(str[i], str[j]);     //backtracking -- to recreate the original input string
    }
}

int main()
{
    string str = "abc";
    int i = 0;
    
    printPermutations(str, i);

    return 0;
}