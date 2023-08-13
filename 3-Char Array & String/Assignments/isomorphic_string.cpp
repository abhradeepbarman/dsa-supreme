#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char hash[256] = {0}; //mapping of each char of s to t
        bool istCharMapped[256] = {0};  // stores if t[i] already mapped with s[i]

        for(int i=0; i<s.length(); i++) {

            if(hash[s[i]] == 0 && istCharMapped[t[i]] == 0) {
                hash[s[i]] = t[i];
                istCharMapped[t[i]] = true;
            }
        }

        //check if we can make 't' from 's' using Hash
        for(int i=0; i<s.length(); i++) {
            if(hash[s[i]] != t[i]) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    
    return 0;
}