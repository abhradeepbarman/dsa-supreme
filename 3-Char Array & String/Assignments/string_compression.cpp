#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& s) {

        int count = 1, index = 0;
        char ch = s[0];

        for(int i=1; i<s.size(); i++) {

            if(s[i] == ch) {
                count++;
            }
            else {
                s[index++] = ch;
                if(count > 1) {
                    int start = index;
                    while(count) {
                        s[index++] = (count % 10) + '0';
                        count /= 10;
                    }
                    reverse(s.begin() + start, s.begin() + index);
                }

                ch = s[i];
                count = 1;
            }    
        }

        s[index++] = ch;
        if(count > 1) {
            int start = index;
            while(count) {
                s[index++] = (count % 10) + '0';
                count /= 10;
            }
            reverse(s.begin() + start, s.begin() + index);
        }

        return index;
    }
};

int main()
{
    
    return 0;
}