#include<bits/stdc++.h>
using namespace std;

void printSubsequences(string& str, int i, string output) {

    //base case
    if(i == str.length()) {
        cout << output << endl;
        return;
    }

    //exclude
    printSubsequences(str, i+1, output);

    //include
    output.push_back(str[i]);
    printSubsequences(str, i+1, output);
}

int main()
{
    string str = "abc";
    string output = "";
    int i = 0;

    printSubsequences(str, i, output);
    
    return 0;
}