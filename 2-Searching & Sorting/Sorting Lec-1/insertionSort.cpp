#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    
    for(int i=1; i<n; i++) {

        for(int j = i; j>=1; j--) {
            if(arr[j-1] > arr[j])
                swap(arr[j], arr[j-1]);
        }
    }
}

void printArray(int arr[], int n) {

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[50];
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    printArray(arr, n);
    insertionSort(arr, n);
    cout << endl;
    printArray(arr, n);

    return 0;
}