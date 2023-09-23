#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool dfsCheck(int node, vector<int> adj[], vector<int>& vis, vector<int>& pathVis) {
        vis[node] = 1;
        pathVis[node] = 1;
        
        //traverse adjacent nodes
        for(auto it: adj[node]) {
            //when the node is not visited
            if(!vis[it]) {
                if(dfsCheck(it, adj, vis, pathVis) == true) {
                    return true;
                }
            }
            //node has been previously visited 
            //but it has to be visited on the same path
            else if(pathVis[it] == 1) {
                return true;
            }
        }
        
        pathVis[node] = 0;
        return false;
    }
    
    
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);
        vector<int> pathVis(V, 0);
        
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                if(dfsCheck(i, adj, vis, pathVis) == true) {
                    return true;
                } 
            }
        }
        return false;
    }
};

int main()
{
    
    return 0;
}