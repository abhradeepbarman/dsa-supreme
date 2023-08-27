#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		string FirstNonRepeating(string A){
		    int freq[26] = {0};
		    queue<char> q;
		    
		    string ans = "";
		    
		    for(auto ch: A) {
		        
		        //increment frequency
		        freq[ch - 'a']++;
		        
		        //insert in queue
		        q.push(ch);
		        
		        while(!q.empty()) {
		            
		            if(freq[q.front() - 'a'] > 1) {
		                //repeating char
		                q.pop();
		            } 
		            else {
		                //non repeating char
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        
		        if(q.empty()) {
		            ans.push_back('#');
		        }
		    }
		    
		    return ans;
		}

};

int main()
{
    
    return 0;
}