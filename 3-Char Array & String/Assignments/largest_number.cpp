#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool comp(string a, string b) {
        string t1 = a+b;
        string t2 = b+a;

        return t1 > t2;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> snums;
        for(auto i: nums) {
            snums.push_back(to_string(i));
        }

        sort(snums.begin(), snums.end(), comp);

        if(snums[0] == "0") return "0";
        
        string ans = "";
        for(auto str: snums) {
            ans += str;
        }

        return ans;
    }
};

int main()
{
    
    return 0;
}