#include<bits/stdc++.h>
using namespace std;

void solve(string& str, char& key, int i, int& last) {

    //base case
    if(i == str.length())
        return;
    
    if(str[i] == key) {
        last = i;
    }

    solve(str, key, i+1, last);
}

int main()
{
    string str = "abcdcefcg";
    char key = 'c';
    int i = 0;
    int last = -1;

    solve(str, key, i, last);

    cout << "last occurrence of " << key << " is = " << last << endl;

    return 0;
}