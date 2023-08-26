#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    public:

    int size;
    int* arr;
    int front;
    int rear;
    
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        
        if((front == 0 && rear == size-1) || (rear == (front - 1) % (size - 1))) {
            //queue is full
            return false;
        }
        else if(rear == size-1 && front != 0) {
            //circular nature
            rear = 0;
        }
        else if(front == -1) {
            //first element to insert
            front = rear = 0;
        }
        else {
            //normal flow
            rear++; 
        }

        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        
        if(front == -1) {
            //queue is empty
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        
        if(front == rear) {
            //single element
            front = -1;
            rear = -1; 
        }
        else if(front == size-1) {
            //circular nature
            front = 0;
        }
        else {
            //normal flow
            front++;
        }

        return ans;
    }
};

int main()
{
    
    return 0;
}