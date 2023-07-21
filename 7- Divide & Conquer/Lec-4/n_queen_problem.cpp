#include<bits/stdc++.h>
using namespace std;

//0-> we can place queen at that place
//1-> we can't place queen at that place

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
    while(j >= 0) {
        if(board[i][j] == 'Q') {
            return false;
        }
        j--;
    }

    //check upper left diagonal
    i = row;
    j = col;

    while(i>=0 && j>=0) {
        if(board[i][j] == 'Q') {
            return false;
        }
        i--, j--;
    }

    //check bottom left diagonal
    i = row;
    j = col;

    while(i<n && j<n) {
        if(board[i][j] == 'Q') {
            return false;
        }
        i++, j--;
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
            //rec. call
            solve(board, col+1, n);
            //backtracking
            board[row][col] = '-';
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