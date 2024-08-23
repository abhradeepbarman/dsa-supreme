#include<bits/stdc++.h>
using namespace std;

// int partition(vector<int>& arr, int s, int e) {
//   // step1: conside pivot element - first element
//   int pivotIndex = s;
//   int cnt = 0;

//   // step2: count the numbers smaller than pivot
//   for(int i=s+1; i<=e; i++) {
//     if(arr[i] <= arr[pivotIndex]) {
//       cnt++;
//     }
//   }

//   // step3: place the pivot element at right position
//   swap(arr[pivotIndex], arr[s+cnt]);
//   pivotIndex = s+cnt;

//   // step4: now put the smaller elements before before & greater elements after
//   int i=s, j=e;

//   while(i<pivotIndex && j>pivotIndex) {
//     if(arr[i] <= arr[pivotIndex]) {
//       i++;
//     }
//     else if(arr[j] > arr[pivotIndex]) {
//       j--;
//     }
//     else {
//       swap(arr[i++], arr[j--]);
//     }
//   }
  
//   return pivotIndex;
// }


int partition(int arr[], int s, int e) {

    int pivotIndex = s;

    int i = pivotIndex + 1;
    int j = e;

    while(i <= j) {
        
        if(arr[i] <= arr[pivotIndex]) {
            i++;
        }
        else if(arr[j] > arr[pivotIndex]) {
            j--;
        }
        else {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[pivotIndex], arr[j]);

    return j;
}

void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) {
        return;
    }

    //partition logic
    int p = partition(arr, s, e);

    //recursive call

    //left call
    quickSort(arr, s, p-1);

    //right call
    quickSort(arr, p+1, e);
}

int main()
{
    int arr[] = {20,8,1,5,50,6,30};
    int n = sizeof(arr) / sizeof(int);

    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}