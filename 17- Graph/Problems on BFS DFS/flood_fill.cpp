#include<bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(int row, int col, vector<vector<int>>& ans, vector<vector<int>>& image, int newColor, vector<pair<int,int>>& dir, int initColor) {

        int n = image.size();
        int m = image[0].size();

        ans[row][col] = newColor;
        for(auto it: dir) {
            int nrow = row + it.first;
            int ncol = col + it.second;

            if((nrow >= 0 && nrow < n) && 
                (ncol >= 0 && ncol < m) && 
                (image[nrow][ncol] == initColor) && 
                ans[nrow][ncol] != newColor) {

                    dfs(nrow, ncol, ans, image, newColor, dir, initColor);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initColor = image[sr][sc];
        vector<vector<int>> ans = image;
        vector<pair<int,int>> dir = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        dfs(sr, sc, ans, image, color, dir, initColor);
        return ans;
    }
};

int main()
{
    
    return 0;
}