#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int MinimumEffort(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        
        //{diif, {row, col}}
        priority_queue<pair<int,pair<int,int>>, 
        vector<pair<int,pair<int,int>>>, 
        greater<pair<int,pair<int,int>>>> pq;
        pq.push({0, {0,0}});
        
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0] = 0;
        
        vector<pair<int,int>> dir = {{-1,0},{0,-1},{1,0},{0,1}};
        
        while(!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            
            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;
            
            if(row == n-1 && col == m-1) {
                return diff;
            }
            
            for(auto it: dir) {
                int nrow = row + it.first;
                int ncol = col + it.second;
                
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) {
                    int newEffort = max(abs(heights[nrow][ncol] - heights[row][col]), diff);
                    
                    if(newEffort < dist[nrow][ncol]) {
                        dist[nrow][ncol] = newEffort;
                        pq.push({newEffort, {nrow, ncol}});
                    }
                }
            }
        }
        return 0;
    }
};

int main()
{
    
    return 0;
}