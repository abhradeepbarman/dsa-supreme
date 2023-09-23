#include<bits/stdc++.h>
using namespace std;

class Solution {
    // colors a component
    bool check(int start, int V, vector<int>adj[], vector<int>& color) {
        queue<int> q;
	    q.push(start);
	    color[start] = 0;
	    
	    while(!q.empty()) {
	        int node = q.front();
	        q.pop();
	        
	        for(auto it: adj[node]) {
	            //if the adjacent node is yet not colored
	            //you will give the opposite color
	            if(color[it] == -1) {
	                color[it] = !color[node];
	                q.push(it);
	            }
	            // is the adjacent node having same color ?
	            //someone colored it on some other path
	            else if(color[it] == color[node]) {
	                return false;
	            }
	        }
	    }
	    
	    return true;
    }
    
public:
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int> color(V, -1);
	    
	    for(int i=0; i<V; i++) {
	        if(color[i] == -1) {
	            if(check(i, V, adj, color) == false) {
	                return false;
	            }
	        }
	    }
	    return true;
	}

};

int main()
{
    
    return 0;
}