#include<bits/stdc++.h>
using namespace std;

int findKey(string& str, char& key, int i) {

    //base case
    if(i == str.length())   
        return -1;   // key not found
    
    // processing
    if(str[i] == key)
        return i;
    
    // recursive relation
    return findKey(str, key, i+1);
}

int main()
{
    string str = "abhradeep";
    char key = 'h';
    int i = 0;

    int ans = findKey(str, key, i);    

    cout << "key is at index " << ans << endl;

    return 0;
}