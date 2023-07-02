#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, -3, 4, -5, 6};
    int n = sizeof(arr) / sizeof(int);

    int l = 0;
    int h = n-1;

    while(l < h) {

        if(arr[l] < 0) {
            l++;
        }
        else if(arr[h] > 0) {
            h--;
        }
        else {
            swap(arr[l], arr[h]);
        }
    }

    
    // print arr
    for(auto i: arr) {
        cout << i << " ";
    }


    return 0;
}