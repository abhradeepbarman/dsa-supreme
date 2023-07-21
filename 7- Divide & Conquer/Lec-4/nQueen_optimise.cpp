#include<bits/stdc++.h>
using namespace std;

//0-> we can place queen at that place
//1-> we can't place queen at that place

unordered_map<int, bool> rowCheck;
unordered_map<int, bool> upperLeftDiagonalCheck;
unordered_map<int, bool> bottomLeftDiagonalCheck;

void printSolution(vector<vector<char>>& board) {

    for(int i=0; i<board.size(); i++) {
        for(int j=0; j<board[0].size(); j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;
}

bool isSafe(vector<vector<char>>& board, int n, int row, int col) {

    //we want to check whether we can place QUEEN at that cell or not
    int i = row;
    int j = col;

    //check left row
    if(rowCheck[i] == true) {
      return false;
    }

    //check upper left diagonal
    if(upperLeftDiagonalCheck[n-1+j-i] == true) {
      return false;
    }

    //check bottom left diagonal
    if(bottomLeftDiagonalCheck[i+j] == true) {
      return false;
    }


    //no QUEEN found
    // this place is safe
    // we can plade QUEEN at this place
    return true;
}

void solve(vector<vector<char>>& board, int col, int n) {

    //base case
    if(col >= n) {
        printSolution(board);
        return;
    }

    //Let's solve 1 case, recursion will handle remaining
    for(int row = 0; row < n; row++) {
        if(isSafe(board, n, row, col)) {
            //place it
            board[row][col] = 'Q';

            //mark in the maps
            rowCheck[row] = true;
            upperLeftDiagonalCheck[n-1+col-row] = true;
            bottomLeftDiagonalCheck[row + col] = true; 

            //rec. call
            solve(board, col+1, n);

            //backtracking
            board[row][col] = '-';

            rowCheck[row] = false;
            upperLeftDiagonalCheck[n-1+col-row] = false;
            bottomLeftDiagonalCheck[row + col] = false; 
        }
    }

}

int main()
{
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;

    solve(board, col, n);


    return 0;
}