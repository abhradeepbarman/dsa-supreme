#include<bits/stdc++.h>
using namespace std;

class MedianFinder {
public:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    MedianFinder() {
        
    }

    int signum(int a, int b) {
        if(a == b)
            return 0;
        else if(a > b)
            return 1;
        else
            return -1;
    }
    
    void addNum(int num) {
        
        if(maxHeap.size() == minHeap.size()) {

            if(maxHeap.size() == 0) {
                //first element
                maxHeap.push(num);
                return;
            }  

            if(num > minHeap.top()) {
                minHeap.push(num);
            }
            else {
                maxHeap.push(num);
            }
        }

        else if(maxHeap.size() > minHeap.size()) {

            if(num < maxHeap.top()) {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
                maxHeap.push(num);
            }
            else {
                minHeap.push(num);
            }
        }
        else {
            // maxHeap.size() < minHeap.size()
            if(num > minHeap.top()) {
                maxHeap.push(minHeap.top());
                minHeap.pop();
                minHeap.push(num);
            }
            else {
                maxHeap.push(num);
            }
        }

    }
    
    double findMedian() {
        double ans;
        
        switch(signum(maxHeap.size(), minHeap.size())){

            case 0:
                //same size
                ans = (maxHeap.top() + minHeap.top()) / 2.0;
                break;

            case 1:
                //maxHeap size is greater
                ans = maxHeap.top();
                break;

            case -1:
                //minHeap size is greater
                ans = minHeap.top();
                break;
        }

        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

int main()
{
    
    return 0;
}