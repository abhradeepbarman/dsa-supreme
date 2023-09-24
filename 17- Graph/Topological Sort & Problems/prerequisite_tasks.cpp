#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	    //create Directed graph
	    vector<int> adj[N];
	    for(auto it: prerequisites) {
	        adj[it.first].push_back(it.second);
	    }
	    
	    //Cycle detection in directed graph
	    vector<int> indegree(N, 0);
	    for(int i=0; i<N; i++) {
	        for(auto it: adj[i]) {
	            indegree[it]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i=0; i<N; i++) {
	        if(indegree[i] == 0) {
	            q.push(i);
	        }
	    }
	    
	    vector<int> topo;
	    while(!q.empty()) {
	        int node = q.front();
	        q.pop();
	        topo.push_back(node);
	        
	        //node is in your topo sort
	        //so please remove it from indegree
	        
	        for(auto it: adj[node]) {
	            indegree[it]--;
	            if(indegree[it] == 0) {
	                q.push(it);
	            }
	        }
	    }
	    
	    if(topo.size() == N) {
	        return true; //possible to perform all taska
	    }
	    else {
	        return false;
	    } 
	}
};

int main()
{
    
    return 0;
}