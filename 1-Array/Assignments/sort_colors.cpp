#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    //Method 1: Sorting
    // sort(nums.begin(), nums.end());



    //Method 2: Counting 
    // int count0 = 0;
    // int count1 = 0;
    // int count2 = 0;

    // for(int i=0; i<nums.size(); i++) {
    //     if(nums[i] == 0) {
    //         count0++;
    //     }
    //     else if(nums[i] == 1) {
    //         count1++;
    //     }
    //     else {
    //         count2++;
    //     }
    // }

    // int i = 0;
    // //putting 0's
    // while(count0 > 0) {
    //     nums[i] = 0;
    //     i++;
    //     count0--;
    // }

    // //putting 1's
    // while(count1 > 0) {
    //     nums[i] = 1;
    //     i++;
    //     count1--;
    // }

    // //putting 2's
    // while(count2 > 0) {
    //     nums[i] = 2;
    //     i++;
    //     count2--;
    // }



    //Method 3: Dutch National Flag
    int s = 0;
    int e = nums.size()-1;
    int m = 0;

    while(m <= e) {

        if(nums[m] == 0) {
            swap(nums[m], nums[s]);
            s++, m++;
        }
        else if(nums[m] == 1) {
            m++;
        }
        else {
            swap(nums[m], nums[e]);
            e--;
        }
    }
    
}

int main()
{
    vector<int> arr = {0,1,1,2,0,2,1,0,1};
    int n = arr.size();

    sortColors(arr);

    for(auto i: arr) {
        cout << i << " ";
    }
    
    return 0;
}