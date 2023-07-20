#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, int rows,int cols,int maze[][4], vector<vector<bool>>& visited)
{
    if((maze[x][y] == 1) && ( (x>=0 && x<rows) && (y>=0 && y<cols)) && (visited[x][y] == false)) {
        return true;
    }
    return false;
}

void solveMaze(int maze[][4], int rows, int cols, int i, int j, vector<vector<bool>>& visited, vector<string>& path, string output) {

    //base case
    if(i == rows-1 && j == cols-1) {
        //answer found 
        path.push_back(output);
        return;
    }


    //Down -> i+1, j
    if(isSafe(i+1, j, rows, cols, maze, visited)) {
        visited[i+1][j] = true;
        solveMaze(maze, rows, cols, i+1, j, visited, path, output + 'D');
        //backtrack
        visited[i+1][j] = false;  
    }

    //Left -> i, j-1
    if(isSafe(i, j-1, rows, cols, maze, visited)) {
        visited[i][j-1] = true;
        solveMaze(maze, rows, cols, i, j-1, visited, path, output + 'L');
        //backtrack
        visited[i][j-1] = false;  
    }

    //Right -> i, j+1
    if(isSafe(i, j+1, rows, cols, maze, visited)) {
        visited[i][j+1] = true;
        solveMaze(maze, rows, cols, i, j+1, visited, path, output + 'R');
        //backtrack
        visited[i][j+1] = false;  
    }

    //Up -> i-1, j
    if(isSafe(i-1, j, rows, cols, maze, visited)) {
        visited[i-1][j] = true;
        solveMaze(maze, rows, cols, i-1, j, visited, path, output + 'U');
        //backtrack
        visited[i-1][j] = false;  
    }

}

int main()
{
    int maze[][4] = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    int rows = 4;
    int cols = 4;


    if(maze[0][0] == 0) {
        cout << "No Paths exist" << endl;
        return 0;
    }

    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    // src value should be 1
    visited[0][0] = true;


    vector<string> path;
    string output = "";
    
    solveMaze(maze, rows, cols, 0, 0, visited, path, output);

    if(path.size() == 0) {
        cout << "No Paths exist" << endl;
        return 0;
    }

    for(auto i: path) { 
        cout << i << endl;
    } 

    return 0;
}