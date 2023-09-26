#include<bits/stdc++.h>
using namespace std;

class Solution {
    
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<int>>& grid, vector<pair<int,int>>& vec, int baseRow, int baseCol) {
        int n = grid.size();
        int m = grid[0].size();
        
        vis[row][col] = 1;
        vec.push_back({row - baseRow, col - baseCol});
        
        vector<pair<int,int>> dir{{-1,0}, {0,-1}, {1,0}, {0,1}};
        
        for(auto it: dir) {
            int nrow = row + it.first;
            int ncol = col + it.second;
            
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                dfs(nrow, ncol, vis, grid, vec, baseRow, baseCol);
            }
        }
    }
    
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        set<vector<pair<int,int>>> st;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                
                if(!vis[i][j] && grid[i][j] == 1) {
                    vector<pair<int,int>> vec;
                    dfs(i, j, vis, grid, vec, i, j);
                    st.insert(vec);
                }
            }
        }
        
        return st.size();
    }
};

int main()
{
    
    return 0;
}