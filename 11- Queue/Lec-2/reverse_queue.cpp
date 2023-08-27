#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q) {
    stack<int> s;

    //STEP 1: put all elements of q into s
    while(!q.empty()) {
        int element = q.front();
        q.pop();

        s.push(element);
    }

    //STEP 2:put all elements of stack into q
    while(!s.empty()) {
        int element = s.top();
        s.pop();

        q.push(element);
    }
}

void reverseQueueRecursive(queue<int>& q) {

    //base case
    if(q.empty()) {
        return;
    }

    int element = q.front();
    q.pop();

    //RE
    reverseQueueRecursive(q);

    q.push(element);
}

int main()
{
    queue<int> q;

    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    // reverseQueue(q);
    reverseQueueRecursive(q);

    //printing queue
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}