#include<bits/stdc++.h>
using namespace std;

class info {
    public:
    int value;
    int row;
    int col;
    
    info(int value, int row, int col) {
        this->value = value;
        this->row = row;
        this->col = col;
    }
};

class compare {
    public:
    bool operator() (info* a, info* b) {
        return a->value > b->value;
    }  
};

class Solution
{
    public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<info*, vector<info*>, compare> minHeap;
        
        //insert first element of every array
        for(int i=0; i<K; i++) {
            info* temp = new info(arr[i][0], i, 0);
            minHeap.push(temp);
        }
        
        vector<int> ans;
        
        while(!minHeap.empty()) {
            info* temp = minHeap.top();
            int topElement = temp->value;
            int topRow = temp->row;
            int topCol = temp->col;
            minHeap.pop();
            
            ans.push_back(topElement);
            
            if(topCol + 1 < arr[0].size()) {
                info* newTemp = new info(arr[topRow][topCol + 1], topRow, topCol+1);
                minHeap.push(newTemp);
            }
        }
        
        return ans;
    }
};

int main()
{
    
    return 0;
}