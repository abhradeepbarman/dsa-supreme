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
    int Solve(int n, vector<vector<int>>& edge) {
        DisjointSet ds(n);
        int cntExtra = 0;
        
        for(auto it: edge) {
            int u = it[0];
            int v = it[1];
            
            if(ds.findParent(u) == ds.findParent(v)) {
                cntExtra++;
            }
            else {
                ds.unionSet(u, v);   
            }
        }
        
        int components = 0;
        for(int i=0; i<n; i++) {
            if(ds.parent[i] == i) {
                components++;
            }
        } 
        
        int ans = components - 1;
        if(cntExtra >= ans) {
            return ans;
        }
        else {
            return -1;
        }
    }
};

int main()
{
    
    return 0;
}