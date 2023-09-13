#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        //create max Heap
        priority_queue<int> pq;
        
        // insert first k element of arr
        for(int i=0; i<k && i<=r; i++) {
            pq.push(arr[i]);
        }
        
        //insert remaining elements, only if they are smaller than top
        for(int i=k; i<=r; i++) {
            
            if(arr[i] < pq.top()) {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        return pq.top();
    }
};

int main()
{
    
    return 0;
}