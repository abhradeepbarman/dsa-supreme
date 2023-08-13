#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char ch) {
        
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    string reverseVowels(string s) {
        int l = 0;
        int h = s.length()-1;

        while(l <= h) {

            if(isVowel(s[l]) && isVowel(s[h])) {
                swap(s[l], s[h]);
                l++, h--;
            }
            else if(isVowel(s[l]) == false) {
                l++;
            }
            else {
                h--;
            }
        }
        return s;
    }
};

int main()
{
    
    return 0;
}