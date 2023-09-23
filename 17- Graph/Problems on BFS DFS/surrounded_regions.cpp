#include<bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>> mat, vector<pair<int,int>>& dir) {
        int n = mat.size();
        int m = mat[0].size();
        
        vis[row][col] = 1;
        
        for(auto it: dir) {
            int nrow = row + it.first;
            int ncol = col + it.second;
            
            if((nrow >= 0 && nrow < n) && 
            (ncol >= 0 && ncol < m) && 
            !vis[nrow][ncol] && 
            (mat[nrow][ncol] == 'O')) {
                
                dfs(nrow, ncol, vis, mat, dir);
            }
        }
    }

public:
    void solve(vector<vector<char>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<pair<int,int>> dir = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        vector<vector<int>> vis(n, vector<int>(m, 0)); 
        
        //traverse first row & last row
        for(int j=0; j<m; j++) {
            
            //first row
            if(mat[0][j] == 'O' && !vis[0][j]) {
                dfs(0, j, vis, mat, dir);
            }
            
            //last row
            if(mat[n-1][j] == 'O' && !vis[n-1][j]) {
                dfs(n-1, j, vis, mat, dir);
            }
        }
        
        //traverse first col & last col
        for(int i=0; i<n; i++) {
            
            //first col
            if(mat[i][0] == 'O' && !vis[i][0]) {
                dfs(i, 0, vis, mat, dir);
            }
            
            //last col
            if(mat[i][m-1] == 'O' && !vis[i][m-1]) {
                dfs(i, m-1, vis, mat, dir);
            }
        }
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(mat[i][j] == 'O' && vis[i][j] == 0) {
                    mat[i][j] = 'X';
                }
            }
        }
    }
};

int main()
{
    
    return 0;
}