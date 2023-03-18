#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}, 
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int startingRow  = 0;
    int startingCol = 0;
    int endingRow = arr.size()-1;
    int endingCol = arr[0].size()-1;

    int total_elements = arr.size() * arr[0].size();
    int count = 0; 

    while(count < total_elements) {

        // print startingRow
        for(int i= startingCol; i<= endingCol && count < total_elements; i++) {
            cout << arr[startingRow][i] << " ";
            count++;
        }
        startingRow++;

        // print endingCol
        for(int i=startingRow; i<=endingRow && count < total_elements; i++) {
            cout << arr[i][endingCol] << " ";
            count++;
        }
        endingCol--;

        // print endingRow
        for(int i = endingCol; i>=startingCol && count < total_elements; i--) {
            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        // print startingCol
        for(int i= endingRow; i>=startingRow && count < total_elements; i--) {
            cout << arr[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }

    return 0;
}