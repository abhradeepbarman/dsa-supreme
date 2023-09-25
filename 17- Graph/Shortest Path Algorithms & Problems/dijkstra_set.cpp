#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        set<pair<int,int>> st;
        vector<int> dist(V, 1e9);
        
        dist[S] = 0;
        st.insert({0, S});
        
        while(!st.empty()) {
            auto it = *(st.begin());
            int node = it.second;
            int dis = it.first;
            st.erase(it);
            
            for(auto it: adj[node]) {
                int adjNode = it[0];
                int edgeWeight = it[1];
                
                if(dis + edgeWeight < dist[adjNode]) {
                    //erase if its existed
                    if(dist[adjNode] != 1e9) {
                        st.erase({dist[adjNode], adjNode});
                    }
                    
                    dist[adjNode] = dis + edgeWeight;
                    st.insert({dist[adjNode], adjNode});
                }
            }
        }
        
        return dist;
    }
};

int main()
{
    
    return 0;
}