#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void buildAns(stack<string> &s, string &ans) {
        //base case
        if(s.empty()) {
            return;
        }

        string minPath = s.top();
        s.pop();

        //RE
        buildAns(s, ans);

        ans += minPath;
    }

public:
    string simplifyPath(string path) {
        stack<string> s;

        int i = 0;
        while(i < path.length()) {
            int start = i;
            int end = i+1;

            while(end < path.length() && path[end] != '/') {
                end++;
            }

            string minPath = path.substr(start, end - start);
            i = end;

            if(minPath == "/" || minPath == "/.") {
                continue;
            }
            else if(minPath != "/..") {
                s.push(minPath);
            }
            else if(!s.empty()){
                s.pop();
            }
        }

        string ans = s.empty() ? "/" : "";

        buildAns(s, ans);
        return ans;
    }
};

int main()
{
    
    return 0;
}