#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    // taking input
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // storing the first element
    int temp = arr[0];

    // left shift all elements
    for(int i=0; i<arr.size()-1; i++) {
        arr[i] = arr[i+1];
    }

    // place the first element at last position
    arr[arr.size() - 1] = temp;

    
    // print arr
    for(auto i: arr) {
        cout << i << " ";
    }

    return 0;
}