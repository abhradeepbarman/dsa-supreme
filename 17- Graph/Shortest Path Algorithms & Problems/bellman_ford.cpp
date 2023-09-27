#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        vector<int> dist(V, 1e8);
        dist[S] = 0;
        
        //relaxation for N-1 times
        for(int i=1; i<=V-1; i++) {
            
            for(auto it: edges) {
                int u = it[0];
                int v = it[1];
                int wt = it[2];
                
                if(dist[u] != 1e8 && dist[u] + wt < dist[v]) {
                    dist[v] = dist[u] + wt;
                }
            }
        }
        
        //check for negative cycle
        //Nth relaxation
        for(auto it: edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            
            if(dist[u] != 1e8 && dist[u] + wt < dist[v]) {
                return {-1};
            }
        }
        
        return dist;
    }
};

int main()
{
    
    return 0;
}