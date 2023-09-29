#include<bits/stdc++.h>
using namespace std;

class DisjointSet {
    public:
    int V;
    vector<int> parent; 
    vector<int> rank;

    //ctor
    DisjointSet(int size) {
        V = size;
        parent.resize(V);
        rank.resize(V);
        
        for(int i=0; i<V; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int findParent(int node) {
        if(parent[node] == node) {
            return node;
        }
        
        //path compression
        return parent[node] = findParent(parent[node]);
    }

    void unionSet(int u, int v) {
        u = findParent(u);
        v = findParent(v);
        
        if(rank[u] < rank[v]) {
            parent[u] = v;
        }
        else if(rank[v] < rank[u]) {
            parent[v] = u;
        }
        else {
            // rank[u] == rank[v]
            parent[v] = u;
            rank[u]++;
        }
    }

};

class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // {wt, {node, adjNode}}
        vector<pair<int, pair<int,int>>> edges;
        for(int i=0; i<V; i++) {
            int node = i;
            
            for(auto it: adj[node]) {
                int adjNode = it[0];
                int wt = it[1];
                
                edges.push_back({wt, {node, adjNode}});
            }
        }   //)(N + E)
        
        
        DisjointSet ds(V);
        //O(ElogE)
        sort(edges.begin(), edges.end());
        int mstWeight = 0;
        
        // O(E*4)
        for(auto it: edges) {
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;
            
            if(ds.findParent(u) != ds.findParent(v)) {
                mstWeight += wt;
                ds.unionSet(u, v);
            }
        }
        
        return mstWeight;
    }
};

int main()
{
    
    return 0;
}