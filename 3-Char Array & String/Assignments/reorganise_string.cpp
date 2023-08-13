#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reorganizeString(string s) {

        //s only consists of lower case English letters
        int hash[26] = {0};

        for(int i=0; i<s.length(); i++) {
            hash[s[i] - 'a']++;
        }   //O(n)

        //find the most occurant char
        char most_occur_char;
        int max_occur = INT_MIN;

        for(int i=0; i<26; i++) {
            if(hash[i] > max_occur) {
                max_occur = hash[i];
                most_occur_char = i + 'a';
            }
        }   //O(1)

        //place most occur char in one go
        int index = 0;
        while(max_occur > 0 && index < s.length()) {
            s[index] = most_occur_char;
            max_occur--;
            index += 2;
        }   //O(n)

        if(max_occur != 0) {
            return "";
        }

        hash[most_occur_char - 'a'] = 0;

        //let's place rest of the chars
        for(int i=0; i<26; i++) {
            
            while(hash[i] > 0) {
                index = (index >= s.length()) ? 1 : index;
                s[index] = i + 'a';
                index += 2;
                hash[i]--;
            }
        }   //O(26 * n) = O(n)
        return s;
    }
};

int main()
{
    
    return 0;
}