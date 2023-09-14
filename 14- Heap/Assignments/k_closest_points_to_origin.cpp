#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int x;
    int y;
    int data;

    Node(int x, int y) {
        this->x = x;
        this->y = y;
        data = (x*x) + (y*y);
    }
};

class compare {
    public:
    bool operator()(Node a, Node b) {
        return a.data < b.data;
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<Node, vector<Node>, compare> maxHeap;

        //enter first k elements into max Heap
        
        for(int i = 0; i<k; i++) {
            int x = points[i][0];
            int y = points[i][1];

            Node temp(x,y);
            maxHeap.push(temp);
        }

        //enter rest elements into maxHeap, if element < maxHeap.top()
        for(int i=k; i<points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];

            Node temp(x,y);
            if(temp.data < maxHeap.top().data) {
                maxHeap.pop();
                maxHeap.push(temp);
            }
        }

        vector<vector<int>> ans;
        while(!maxHeap.empty()) {
            Node temp = maxHeap.top();
            maxHeap.pop();

            int x = temp.x;
            int y = temp.y;
            vector<int> tempAns = {x,y};
            ans.push_back(tempAns);
        }

        return ans;
    }   
};

int main()
{
    
    return 0;
}