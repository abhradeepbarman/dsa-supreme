#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> indegree(V, 0);
	    for(int i=0; i<V; i++) {
	        for(auto it: adj[i]) {
	            indegree[it]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i=0; i<V; i++) {
	        if(indegree[i] == 0) {
	            q.push(i);
	        }
	    }
	    
	    int cnt = 0;
	    while(!q.empty()) {
	        int node = q.front();
	        q.pop();
	        cnt++;
	        
	        //node is in your topo sort
	        //so please remove it from indegree
	        
	        for(auto it: adj[node]) {
	            indegree[it]--;
	            if(indegree[it] == 0) {
	                q.push(it);
	            }
	        }
	    }
	    
	    if(cnt == V) {
	        return false;
	    }
	    else {
	        return true;
	    }
    }
};

int main()
{
    
    return 0;
}