#include<bits/stdc++.h>
using namespace std;

int firstRepeated(int arr[], int n) {
    // Method 1: Brute Force
    // for(int i=0; i<n; i++) {
    //     for(int j = i+1; j<n; j++) {
    //         if(arr[i] == arr[j])
    //             return i+1;
    //     }
    // }
    // return -1;
    
    
    //METHOD 2: Hashing Technique
    unordered_map<int, int> hash;
    
    // storing appearances
    for(int i=0; i<n; i++) {
        hash[arr[i]]++;
    }
    
    for(int i=0; i<n; i++) {
        
        if(hash[arr[i]] > 1)
            return i+1;
    }
    return -1;
}

int main()
{
    
    return 0;
}