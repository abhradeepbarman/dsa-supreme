#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {

    for(int i=0; i<n-1; i++) {
        int mini = i;

        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }

        swap(arr[i], arr[mini]);
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
    selectionSort(arr, n);
    cout << endl;
    printArray(arr, n);

    return 0;
}