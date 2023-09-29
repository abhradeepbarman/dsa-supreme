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

class Solution {
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        DisjointSet ds(V);
        for(int i=0; i<V; i++) {
            for(int j=0; j<V; j++) {
                if(adj[i][j] == 1) {
                    ds.unionSet(i, j);
                }
            }
        }
        
        int cnt = 0;
        for(int i=0; i<V; i++) {
            if(ds.findParent(i) == i) {
                cnt++;
            }
        }
        return cnt;
    }
};


int main()
{
    
    return 0;
}