#include<bits/stdc++.h>
using namespace std;

class info {
    public:
    int val;
    int row;
    int col;

    info(int val, int row, int col) {
        this->val = val;
        this->row = row;
        this->col = col;
    }
};

class compare {
    public:
    bool operator()(info* a, info* b) {
        return a->val > b->val;
    }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        priority_queue<info*, vector<info*>, compare> minHeap;

        int k = nums.size();
        for(int i=0; i<k; i++) {
            int element = nums[i][0];
            maxi = max(maxi, element);
            mini = min(mini, element);

            minHeap.push(new info(element, i, 0));
        }


        int ansStart = mini;
        int ansEnd = maxi;

        while(!minHeap.empty()) {

            info* temp = minHeap.top();
            int topElement = temp->val;
            int topRow = temp->row;
            int topCol = temp->col;
            minHeap.pop(); 
            
            //mini updated
            mini = topElement;

            //check for answer
            int currRange = maxi - mini;
            if(currRange < ansEnd - ansStart) {
                ansStart = mini;
                ansEnd = maxi;
            }

            //check for new element in the same list
            if(topCol + 1 < nums[topRow].size()) {
                info* newInfo = new info(nums[topRow][topCol + 1], topRow, topCol + 1);
                minHeap.push(newInfo);
                
                //maxi update
                maxi = max(maxi, nums[topRow][topCol + 1]);
            }
            else {
                //there is no element in the same list
                break;
            }
        }

        return {ansStart, ansEnd};
    }
};

int main()
{
    
    return 0;
}