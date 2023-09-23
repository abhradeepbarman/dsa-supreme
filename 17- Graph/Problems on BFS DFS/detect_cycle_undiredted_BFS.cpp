#include<bits/stdc++.h>
using namespace std;

// Detect cycle in an undirected graph -- BFS

class Solution {
    bool detect(int src, vector<int> adj[], int vis[]) {
        vis[src] = 1;
        queue<pair<int,int>> q;
        q.push({src, -1});
        
        while(!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(auto adjNode: adj[node]) {
                if(!vis[adjNode]) {
                    vis[adjNode] = 1;
                    q.push({adjNode, node});
                }
                else if(adjNode != parent) {
                    return true;
                }
            }
        }
        return false;
    }
    
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V] = {0};
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                if(detect(i, adj, vis))     
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    
    return 0;
}