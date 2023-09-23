#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool dfsCheck(int node, vector<int> adj[], vector<int>& vis, vector<int>& pathVis, vector<int>& check) {
        vis[node] = 1;
        pathVis[node] = 1;
        check[node] = 0;
        
        //traverse adjacent nodes
        for(auto it: adj[node]) {
            //when the node is not visited
            if(!vis[it]) {
                if(dfsCheck(it, adj, vis, pathVis, check) == true) {
                    check[node] = 0; //there's a cycle , this node cannot be safe node
                    return true;
                }
            }
            //node has been previously visited 
            //but it has to be visited on the same path
            else if(pathVis[it] == 1) {
                check[node] = 0;
                return true;
            }
        }
        
        check[node] = 1;
        pathVis[node] = 0;
        return false;
    }
    
    
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);
        vector<int> pathVis(V, 0);
        vector<int> check(V, 0);    // mark the safe nodes here
        vector<int> safeNodes;
        
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                dfsCheck(i, adj, vis, pathVis, check);
            }
        }
        
        for(int i=0; i<V; i++) {
            if(check[i] == 1) {
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};

int main()
{
    
    return 0;
}