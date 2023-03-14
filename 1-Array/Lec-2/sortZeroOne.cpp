#include<bits/stdc++.h>
using namespace std;

//PROBLEM: Sort 0's and 1's 

int main()
{
    vector<int> arr = {0, 1, 1, 0, 1, 0, 0};

    int s = 0;
    int e = arr.size()-1;
    int i = 0;

    while(i < e) {

        // found zero
        if(arr[i] == 0) {
            swap(arr[i], arr[s]);
            s++, i++;
        }

        // found one
        else {
            swap(arr[i], arr[e]);
            e--;
        }
    }

    // print arr
    for(auto i: arr) {
        cout << i << " ";
    }

    return 0;
}