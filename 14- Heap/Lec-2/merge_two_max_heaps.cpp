#include<bits/stdc++.h>
using namespace std;

class Solution{
    void heapify(vector<int>& arr, int n, int i) {
        //0 based indexing
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
    
        if(left < n && arr[largest] < arr[left]) {
            largest = left;
        }
    
        if(right < n && arr[largest] < arr[right]) {
            largest = right;
        }
    
        if(largest != i) {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }
    
    void buildHeap(vector<int>& arr, int n) {
    
        for(int i=n/2-1; i>=0; i--) {
            heapify(arr,n,i);
        }
    }
    
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
         //merge both arrays into one 
         vector<int> ans;
         
         for(auto it: a) {
             ans.push_back(it);
         }
         
         for(auto it: b) {
             ans.push_back(it);
         }
         
         //build Heap using merged array
         buildHeap(ans, ans.size());
         
         return ans;
    }
};

int main()
{
    
    return 0;
}