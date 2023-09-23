#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        //{{r, c}, t}
        queue< pair< pair<int,int>, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                }
            }
        }

        vector<pair<int,int>> dir = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        int time = 0;
        while(!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            time = max(time, t);
            q.pop();

            for(auto it: dir) {
                int nrow = r + it.first;
                int ncol = c + it.second;

                if((nrow >= 0 && nrow < n) && 
                    (ncol >= 0 && ncol < m) && 
                    vis[nrow][ncol] != 2 &&
                    grid[nrow][ncol] == 1) {
                        
                    q.push({{nrow, ncol}, t+1});
                    vis[nrow][ncol] = 2;
                }
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1 && vis[i][j] != 2) {
                    return -1;
                }
            }
        }

        return time;
    }
};

int main()
{
    
    return 0;
}