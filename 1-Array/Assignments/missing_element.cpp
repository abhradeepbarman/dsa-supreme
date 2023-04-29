#include<bits/stdc++.h>
using namespace std;

// // METHOD 1: Visiting Method
// void findMissing(int arr[], int n) {

//     for(int i=0; i<n; i++) {
//         int index = abs(arr[i]);

//         if(arr[index -1] > 0) {
//             arr[index - 1] *= -1;
//         }
//     }

//     for(int i=0; i<n; i++) {
//         if(arr[i] > 0)
//             cout << i+1 << " ";
//     }
// }


//METHOD 2: sorting + swapping method
void findMissing(int arr[], int n) {

    int i=0; 

    while(i < n) {
        int index = arr[i] - 1;

        if(arr[i] != arr[index]) {
            swap(arr[i], arr[index]);
        }
        else {
            i++;
        }

    }

    for(int i=0; i<n; i++){
        if(arr[i] != i+1)
            cout << i+1 << " ";
    }
}

int main()
{
    // int arr[] = {1, 3, 3, 3, 4};
    int arr[] = {1, 3, 3, 3, 5};
    int n = sizeof(arr) / sizeof(int);

    findMissing(arr, n);

    return 0;
}