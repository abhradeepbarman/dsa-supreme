#include <bits/stdc++.h>
using namespace std;

//METHOD 1: Counting Method  --> Brute Force    
// Time complexity --> O(N^2)

// int majorityElement(vector<int> arr) {
//     int ans = -1;

//     for(int i=0; i<arr.size(); i++) {
//         int element = arr[i];
//         int count = 0;
//         int maxCount = 0;

//         for(int j=0; j<arr.size(); j++) {

//             if(arr[j] == element) 
//                 count++;
//         }

//         if(count > maxCount){
//             maxCount = count;
//             ans = element;
//         }   
//     }
//     return ans;
// }






//METHOD 2: Sorting Technique
// Time Complexity --> O(NlogN)

// int majorityElement(vector<int> arr) {

//     sort(arr.begin(), arr.end());

//     int count = 0;
//     int maxCount = 0;
//     int ans = -1;
    
//     for(int i=0; i<arr.size(); i++) {
        
//         if(i == 0) {
//             count++;
//             maxCount = count;
//         } else {
//             if(arr[i] == arr[i-1]) {
//                 count++;
//             } else {
//                 count = 0;
//             }
//         }

//         if(count > maxCount)  {
//             maxCount = count;
//             ans = arr[i];
//         }
//     }
//     return ans;
// }






//METHOD 3: Hashing Technique
// Time complexity --> O(N)
// Space complexity --> O(N)

// int majorityElement(vector<int> &nums) {
//     unordered_map<int, int> hash;

//     for (int i = 0; i < nums.size(); i++) {
//         hash[nums[i]]++;
//     }

//     int maxCount = 0;
//     for (auto i : hash){

//         if (i.second > nums.size() / 2) {

//             maxCount = i.first;
//         }
//     }
//     return maxCount;
// }







//METHOD 4: Moore's Voting Algorithm
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = 0;

        for(int i=0; i<nums.size(); i++) {

            if(count == 0)
                element = nums[i];
            
            if(nums[i] == element) 
                count++;
            else 
                count--;
        }

        return element;
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