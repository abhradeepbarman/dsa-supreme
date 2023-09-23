#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int,int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        //mark all Boundary 1's
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                //first row, first col, last row, last col
                if(i == 0 || j == 0 || i == n-1 || j == m-1) {
                    if(grid[i][j] == 1) {
                        q.push({i, j});
                        vis[i][j] = 1;
                    }
                }
            }
        }

        vector<pair<int,int>> dir{{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        
        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(auto it: dir) {
                int nrow = row + it.first;
                int ncol = col + it.second;

                if(nrow >= 0 && nrow < n && ncol >=0 && ncol < m && grid[nrow][ncol] == 1 && vis[nrow][ncol] != 1) {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }

        int count = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1 && vis[i][j] == 0) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    
    return 0;
}