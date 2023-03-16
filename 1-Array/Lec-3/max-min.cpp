#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1 ,2 , 11},
        {4, 0, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;

    int maxi = INT_MIN;
    int mini = INT_MAX;

    for(int i=0; i<rows; i++) {

        for(int j=0; j<cols; j++) {

            int currElement = arr[i][j];

            if(currElement > maxi) 
                maxi = currElement;

            if(currElement < mini)
                mini = currElement;
        }
    }

    cout << "Maximum element = " << maxi << endl;
    cout << "Minimum element = " << mini  << endl;


    return 0;
}