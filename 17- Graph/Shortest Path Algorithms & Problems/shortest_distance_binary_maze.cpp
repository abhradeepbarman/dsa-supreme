#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
                         
        // Edge Case: if the source is only the destination.
        if (source.first == destination.first &&
            source.second == destination.second)
            return 0;                 
        
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int, pair<int,int>>> q;
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[source.first][source.second] = 0;
        q.push({0, {source.first, source.second}});
        vector<pair<int,int>> dir = {{-1,0}, {0,-1}, {1,0}, {0, 1}};
        
        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            
            int row = it.second.first;
            int col = it.second.second;
            int dis = it.first;
            
            for(auto it: dir) {
                int nrow = row + it.first;
                int ncol = col + it.second;
                
                if(nrow >= 0 && nrow < n && 
                ncol >= 0 && ncol < m && 
                grid[nrow][ncol] == 1 &&
                dis + 1 < dist[nrow][ncol] ) {
                    dist[nrow][ncol] = dis + 1;
                    
                    //check if this is our destination
                    if(nrow == destination.first && ncol == destination.second) {
                        return dis + 1;
                    }
                    
                    q.push({1 + dis, {nrow, ncol}});
                }
            }
        }
        return -1;
    }
};

int main()
{
    
    return 0;
}