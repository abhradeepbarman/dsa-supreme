#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
        vector<vector<string>> ans;
        queue<pair<vector<string>,int>> q;  //first: sequence  second: level
        q.push({{beginWord}, 1});
        unordered_set<string> st(wordList.begin(), wordList.end());
        
        int prevSteps = -1;
        vector<string> toBeRemoved;
        
        while(!q.empty()) {
            auto node = q.front();
            q.pop();
            
            vector<string> seq = node.first;
            string word = seq[seq.size()-1];
            int steps = node.second;
            
            if(steps != prevSteps) {
                for(auto str: toBeRemoved) {
                    st.erase(str);
                }
                toBeRemoved.clear();
                prevSteps = steps;
            }
            
            if(word == endWord) {
                ans.push_back(seq);
            }
            
            for(int i=0; i<word.size(); i++) {
                char original = word[i];
                for(char ch='a'; ch<='z'; ch++) {
                    word[i] = ch;
                    if(st.find(word) != st.end()) {
                        //it exixts in the set
                        vector<string> temp = seq;
                        temp.push_back(word);
                        q.push({temp, steps + 1});
                        toBeRemoved.push_back(word);
                    }
                }
                word[i] = original;
            }
        }
        
        return ans;
    }
};

int main()
{
    
    return 0;
}