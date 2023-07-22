#include <bits/stdc++.h>
using namespace std;

bool isSafe(int value, int board[][9], int row, int col)
{

    for (int i = 0; i < 9; i++)
    {
        // row check
        for (int i = 0; i < 9; i++)
        {
            if (board[row][i] == value)
            {
                return false;
            }
        }

        // col check
        for (int i = 0; i < 9; i++)
        {
            if (board[i][col] == value)
            {
                return false;
            }
        }

        // 3*3 box check
        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == value) {
            return false;
        }
    }

    // 3*3 box check
    // int squareRoot = sqrt(9);
    // int rowStart = row - row % squareRoot;
    // int colStart = col - col % squareRoot;

    // for (int r = rowStart; r < rowStart + squareRoot; r++)
    // {
    //     for (int c = colStart; c < colStart + squareRoot; c++)
    //     {
    //         if (board[r][c] == value)
    //         {
    //             return false;
    //         }
    //     }
    // }

    // everything is checked --> safe
    return true;
}

// this function will return true or false, basis on we foundna solution or not
bool solve(int board[9][9], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            // check for empty cell
            if (board[i][j] == 0)
            {

                for (int value = 1; value <= 9; value++)
                {
                    // check for safety
                    if (isSafe(value, board, i, j))
                    {
                        // insert
                        board[i][j] = value;
                        // rest recursion will handle
                        bool aageKaSolution = solve(board, n);
                        if (aageKaSolution == true)
                        {
                            return true;
                        }
                        // backtracking
                        board[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main()
{
    // 0 represents empty cell
    int board[9][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                       {5, 2, 0, 0, 0, 0, 0, 0, 0},
                       {0, 8, 7, 0, 0, 0, 0, 3, 1},
                       {0, 0, 3, 0, 1, 0, 0, 8, 0},
                       {9, 0, 0, 8, 6, 3, 0, 0, 5},
                       {0, 5, 0, 0, 9, 0, 6, 0, 0},
                       {1, 3, 0, 0, 0, 0, 2, 5, 0},
                       {0, 0, 0, 0, 0, 0, 0, 7, 4},
                       {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    int n = 9;

    solve(board, n);

    cout << "printing the solutio: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << "| ";
        }
        cout << endl;
    }

    return 0;
}