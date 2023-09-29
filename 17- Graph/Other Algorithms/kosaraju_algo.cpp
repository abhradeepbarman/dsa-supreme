#include<bits/stdc++.h>
using namespace std;

class Solution
{
    void dfs(int node, vector<vector<int>>& adj, vector<int>& vis, stack<int>& s) {
        vis[node] = 1;
        
        for(auto it: adj[node]) {
            if(!vis[it]) {
                dfs(it, adj, vis, s);
            }
        }
        
        s.push(node);
    }
    
    void dfs2(int node, vector<int> tranpose[], vector<int>& vis) {
        vis[node] = 1;
        
        for(auto it: tranpose[node]) {
            if(!vis[it]) {
                dfs2(it, tranpose, vis);
            }
        }
    }
    
    
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //step 1
        vector<int> vis(V, 0);
        stack<int> s; 
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                dfs(i, adj, vis, s);
            }
        }
        
        //step 2
        vector<int> transpose[V];
        for(int i=0; i<V; i++) {
            
            for(auto it: adj[i]) {
                transpose[it].push_back(i);
            }
        }
        
        //step 3
        fill(vis.begin(), vis.end(), 0);
        int scc = 0;
        
        while(!s.empty()) {
            int node = s.top();
            s.pop();
            
            if(!vis[node]) {
                scc++;
                dfs2(node, transpose, vis);
            }
        }
        return scc;
    }
};

int main()
{
    
    return 0;
}