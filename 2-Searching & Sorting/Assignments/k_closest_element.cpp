#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& arr, int x) { 
        int s = 0;
        int e = arr.size()-1;

        while(s <= e) {
            int mid = s+(e-s)/2;

            if(arr[mid] == x) {
                return mid;
            }
            else if(arr[mid] < x) {
                s = mid+1;
            }
            else {
                e = mid-1;
            }
        }
        return s;
    }

    vector<int> twoPtr(vector<int>& arr, int k, int x) {
        int l = 0;
        int h = arr.size()-1;

        while(h-l+1 != k) {
            if( (abs(arr[l] - x)) <= (abs(arr[h] - x))) {
                h--;
            }
            else {
                l++;
            }
        }

        vector<int> ans;
        for(int i=l; i<=h; i++) {
            ans.push_back(arr[i]);
        }

        return ans;
    }

    vector<int> bs_method(vector<int>& arr, int k, int x) {
        vector<int> ans;

        //STEP 1: apply binary search
        int pos = binarySearch(arr, x);

        //STEP 2: insert closest elements
        int right = pos;
        int left = pos-1;

        while(k > 0 && left >= 0 && right < arr.size()) {

            if(abs(arr[left] - x) <= abs(arr[right] - x)) {
                ans.push_back(arr[left]);
                left--;
                k--;
            }
            else {
                ans.push_back(arr[right]);
                right++;
                k--;
            }
        }

        while(k > 0 && left >= 0) {
            ans.push_back(arr[left]);
            left--;
            k--;
        }

        while(k > 0 && right < arr.size()) {
            ans.push_back(arr[right]);
            right++;
            k--;
        }

        sort(ans.begin(), ans.end());
        return ans;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        //METHOD 1: Two pointer Method
        // vector<int> ans = twoPtr(arr,k,x);
        // return ans;



        //METHOD 2: Binary Search
        vector<int> ans = bs_method(arr, k, x);
        return ans;        
    }
};

int main()
{
    
    return 0;
}