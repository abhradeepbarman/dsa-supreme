#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        int n = q.size();
        
        //Separate into two queues
        queue<int> first;
        int count = 0;
        
        while(count != n/2) {
            int element = q.front();
            q.pop();
            
            first.push(element);
            count++;
        }
        
        queue<int>& second = q;
        
        //Now start interleaving
        vector<int> ans;
        
        while(!first.empty() && !second.empty()) {
            ans.push_back(first.front());
            first.pop();
            
            ans.push_back(second.front());
            second.pop();
        }

        //odd length case
        if(n&1) {
            ans.push_back(second.front());
            second.pop();
        }
        
        return ans;
    }
};

int main()
{
    
    return 0;
}