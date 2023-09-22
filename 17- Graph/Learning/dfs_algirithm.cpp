#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[], vector<int>& ls) {
        
    vis[node] = 1;
    ls.push_back(node);
    
    //traverse all its neighbors
    for(auto it: adj[node]) {
        if(!vis[it]) {
            dfs(it, adj, vis, ls);
        }
    }
}

// Function to return a list containing the DFS traversal of the graph.
vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    // Code here
    int vis[V] = {0};
    int startNode = 0;
    vector<int> ls;
    
    dfs(startNode, adj, vis, ls);
    return ls;
}

int main()
{
    
    return 0;
}