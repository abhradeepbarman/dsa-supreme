#include<bits/stdc++.h>
using namespace std;

class Solution {
    long long int merge(long long arr[], int s, int mid, int e) {
        int i=s, j=mid+1, k=0;
        vector<long long> temp(e-s+1);
        long long int cnt = 0;
        
        while(i<=mid && j<=e) {
            if(arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            }
            else {
                // arr[i] > arr[j]  -- inversion count
                cnt += (mid-i+1);
                temp[k++] = arr[j++];
            }
        }
        
        while(i<=mid) {
            temp[k++] = arr[i++];
        }
        
        while(j<=e) {
            temp[k++] = arr[j++];
        }
        
        int index=s;
        k=0;
        while(index <= e) {
            arr[index++] = temp[k++];
        }
        
        return cnt;
    }
    
    long long int mergeSort(long long arr[], int s, int e) {
        if(s >= e) {
            return 0;
        }
        
        long long int cnt = 0;
        
        int mid = s+(e-s)/2;
        cnt += mergeSort(arr, s, mid);
        cnt += mergeSort(arr, mid+1, e);
        cnt += merge(arr, s, mid, e);
        
        return cnt;
    }
    
  public:
    long long int inversionCount(long long arr[], int n) {
        // METHOD 1: NAIVE APPROACH
        // long long int cnt = 0;
        // for(int i=0; i<n; i++) {
        //     for(int j=i+1; j<n; j++) {
        //         if(arr[i] > arr[j]) {
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;
        
        long long int cnt=0;
        cnt = mergeSort(arr, 0, n-1);
        return cnt;
    }
};

int main()
{
    
    return 0;
}