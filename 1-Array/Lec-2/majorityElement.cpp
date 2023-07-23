#include <bits/stdc++.h>
using namespace std;

// METHOD 1: Counting Method  --> Brute Force
//  Time complexity --> O(N^2)

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

// METHOD 2: Sorting method
//Time Complexity = O(nlogn + n) = O(nlogn)
//Space complexity = O(1)
// int majorityElement(vector<int> &nums) {
    // int n = nums.size();
    // sort(nums.begin(), nums.end());

    // int element = nums[0];
    // int count = 0;

    // for(int i=0; i<n; i++) {
    //     if(nums[i] == element) {
    //         count++;

    //         if(count > n/2) {
    //             return element;
    //         }
    //     }
    //     else {
    //         element = nums[i];
    //         count = 1;
    //     }
    // }
    // return -1;
// }


// METHOD 3: Hashing Technique
//  Time complexity --> O(N)
//  Space complexity --> O(N)

int majorityElement(vector<int> &nums) {

    int n = nums.size();
    unordered_map<int, int> hash;

    //store occurrences
    for(int i=0; i<nums.size(); i++) {
        hash[nums[i]]++;
    }

    for(int i=0; i<nums.size(); i++) {
        int element = nums[i];

        if(hash[element] > n/2) {
            return element;
        }
    }
    return -1;
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