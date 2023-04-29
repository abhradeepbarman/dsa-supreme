#include <bits/stdc++.h>
using namespace std;

//METHOD 1: Counting Method  --> Brute Force    
// Time complexity --> O(N^2)

// int majorityElement(vector<int> arr) {
//     int n = arr.size();

//     for(int i=0; i<n; i++) {
//         int element = arr[i];
//         int cnt = 0;

//         for(int j=0; j<arr.size(); j++) {

//             if(arr[j] == element) 
//                 cnt++;
//         }

//         if(cnt > n/2){
//             return element;
//         }   
//     }
// }


//METHOD 2: Hashing Technique
// Time complexity --> O(N)
// Space complexity --> O(N)

int majorityElement(vector<int> &arr) {
    int n = arr.size();
    map<int, int> hash;

    for (int i=0; i<n; i++) {
        hash[arr[i]]++;
    }

    for(auto i: hash) {
        
        if(i.second > n/2) {
            return i.first;
        }
    }
}


int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    // taking input
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = majorityElement(arr);
    cout << "Majority element = " << ans << endl;

    return 0;
}