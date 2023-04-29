#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    // APPROACH 1:
    // sort(nums.begin(), nums.end());

    // for(int i=0; i<nums.size()-1; i++) {
    //     if(nums[i] == nums[i+1])
    //         return nums[i];
    // }
    // return -1;


    // APPROACH 2: Negative Marking Method
    // for(int i=0; i<nums.size(); i++) {
    //     int index = abs(nums[i]); 
        
    //     // already visited
    //     if(nums[index] < 0)
    //         return index;
        
    //     // visited mark
    //     nums[index] *= -1;
    // }
    // return -1;


    // APPROACH 3: Positioning Method
    while(nums[0] != nums[nums[0]]) {
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
}

int main()
{
    
    return 0;
}