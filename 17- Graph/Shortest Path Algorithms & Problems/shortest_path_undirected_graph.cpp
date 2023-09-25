#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        //cretae adj list
        vector<int> adj[N];
        for(auto it: edges) {
            int u = it[0];
            int v = it[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        
        vector<int> dist(N, 1e9);
        dist[src] = 0;
        queue<int> q;
        q.push(src);
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            
            for(auto it: adj[node]) {
                //relaxation
                if(dist[node] + 1 < dist[it]) {
                    dist[it] = dist[node] + 1;
                    q.push(it);
                }
            }
        }
        
        for(int i=0; i<dist.size(); i++) {
            if(dist[i] == 1e9)  
                dist[i]=-1;
        }
        
        return dist;
    }
};

int main()
{
    
    return 0;
}