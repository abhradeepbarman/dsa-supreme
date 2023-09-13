#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i) {

    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= n && arr[largest] < arr[left]) {
        largest = left;
    }

    if(right <= n && arr[largest] < arr[right]) {
        largest = right;
    }

    if(largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n) {

    for(int i=n/2; i>0; i--) {
        heapify(arr,n,i);
    }
}

void heapSort(int arr[], int n) {

    int size = n;

    while(size > 1) {
        //step 1:
        swap(arr[1], arr[size]);
        size--;

        //step 2:
        heapify(arr, size, 1);
    }
}

int main()
{
    int arr[] = {-1, 10, 50, 20, 40, 30};
    int n = 5;

    buildHeap(arr, n);

    heapSort(arr, n);

    //printing heap
    for(int i=1; i<=n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}