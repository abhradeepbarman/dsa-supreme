#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string& s, string& part) {
        
        //base case
        if(s.find(part) == string::npos) {
            return s;
        }

        int pos = s.find(part);
        s.erase(pos, part.length());

        return removeOccurrences(s, part);
    }
};

int main()
{
    
    return 0;
}