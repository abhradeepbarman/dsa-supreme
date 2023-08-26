#include<bits/stdc++.h>
using namespace std;

class Deque
{
    int* arr;
    int size;
    int front;
    int rear;

public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //check full or not
        if(isFull()) {
            //deque is full
            return false;
        }
        else if(isEmpty()) {
            //first element to push
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1) {
            //cyclic nature
            front = size - 1;
        }
        else {
            front--;
        }
        
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if(isFull()) {
            //queue is full
            return false;
        }
        else if(rear == size-1 && front != 0) {
            //circular nature
            rear = 0;
        }
        else if(isEmpty()) {
            //first element to insert
            front = rear = 0;
        }
        else {
            //normal flow
            rear++; 
        }

        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(isEmpty()) {
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

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(isEmpty()) {
            //queue is empty
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear) {
            //single element
            front = -1;
            rear = -1;
        }
        else if(rear == 0) {
            //cyclic flow
            rear = size-1;
        }
        else {
            //normal flow
            rear--;
        }

        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(front == -1) {
            return -1;
        }
        else {
            return arr[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(front == -1) {
            return -1;
        }
        else {
            return arr[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1) {
            return true;
        }
        else {
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front == 0 && rear == size-1) || ( front != 0 && rear == (front - 1) % (size - 1))) {
            //queue is full
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    
    return 0;
}