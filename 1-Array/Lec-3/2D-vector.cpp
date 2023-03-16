#include<bits/stdc++.h>
using namespace std;

int main()
{
    // 2D vector

    // declare
    vector<vector<int>> arr;

    // initialize
    vector<vector<int>> brr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // print
    for(int i=0; i<brr.size(); i++) {

        for(int j=0; j<brr[0].size(); j++) {

            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    // another way of representing 2D vector
    vector<vector<int>> drr(3, vector<int>(5, -8));

    // print
    for(int i=0; i<drr.size(); i++) {

        for(int j=0; j<drr[0].size(); j++) {

            cout << drr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}