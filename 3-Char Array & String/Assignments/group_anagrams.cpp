#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    std::array<int,26> hash(string s) {
        std::array<int,26>hash = {0};

        for(int i=0; i<s.length(); i++) {
            hash[s[i] - 'a']++;
        }

        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // map<string, vector<string>> hash;

        // for(auto str: strs) {
        //     string temp = str;
        //     sort(temp.begin(), temp.end());
        //     hash[temp].push_back(str);
        // }

        // vector<vector<string>> ans;
        // for(auto it: hash) {
        //     ans.push_back(it.second);
        // }
        // return ans;



        //METHOD 2
        map<std::array<int,26>, vector<string>> mp;

        for(auto str: strs) {
            mp[hash(str)].push_back(str);  
        }

        vector<vector<string>> ans;
        for(auto it: mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}