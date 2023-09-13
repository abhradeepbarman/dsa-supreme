#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //Max Heap
    // priority_queue<int> pq;

    // pq.push(4);
    // pq.push(2);
    // pq.push(5);
    // pq.push(3);

    // cout << "Top element: " << pq.top() << endl;
    // pq.pop();
    // cout << "Top element: " << pq.top() << endl;
    // cout << "Size: " << pq.size() << endl;

    // if(pq.empty()) {
    //     cout << "pq is empty" << endl;
    // } 
    // else {
    //     cout << "pq is not empty" << endl;
    // }


    //Min Heap
    priority_queue<int, vector<int>, greater<int> > minHeap;

    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);

    cout << "Top element: " << minHeap.top() << endl;
    minHeap.pop();
    cout << "Top element: " << minHeap.top() << endl;

    cout << "Size: " << minHeap.size() << endl;

    if(minHeap.empty()) {
        cout << "min heap is empty" << endl;
    } 
    else {
        cout << "min heap is not empty" << endl;
    }


    return 0;
}