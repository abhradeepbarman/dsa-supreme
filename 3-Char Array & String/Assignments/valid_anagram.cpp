#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        //METHOD 1: Sorting Technique
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // if(s.compare(t) == 0) {
        //     return true;
        // }
        // return false;



        
        //METHOD 2: HASHING TECHNIQUE
        // map<char,int> hash;

        // for(int i=0; i<s.length(); i++) {
        //     hash[s[i]]++;
        // }

        // for(int i=0; i<t.length(); i++) {
        //     hash[t[i]]--;
        // }

        // //every element's frequence should be 0 if it's a Anagram
        // for(auto it: hash) {
        //     if(it.second != 0) {
        //         return false;
        //     }
        // }
        // return true;



        //METHOD 3: using frequency table
        int freqTable[256] = {0};

        for(int i=0; i<s.length(); i++) {
            freqTable[s[i]]++;
        }  //O(n)

        for(int i=0; i<t.length(); i++) {
            freqTable[t[i]]--;
        }  //O(n)

        for(int i=0; i<256; i++) {
            if(freqTable[i] != 0) {
                return false;
            }
        }  //O(256)
        return true;
    }   
};

int main()
{
    
    return 0;
}