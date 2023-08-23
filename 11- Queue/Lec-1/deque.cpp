#include<bits/stdc++.h>
using namespace std;

class Deque {
    public:

    int* arr;
    int size;
    int front;
    int rear;

    Deque(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }


    void pushRear(int data) {
        //Queue Full

        //single element case - > first element

        //circular nature

        //normal flow

        //TODO: add one more condition in the QUEUE FULL if block
        if((front == 0 && rear == size-1)) {
            cout << "Q is fulll, cannot insert" << endl;
            return;
        }
        else if(front == -1) {
            front = rear = 0;                    
        }
        else if(front == 0 && rear != size-1) {
            front = size-1;
                
        }
        else{
            front--;
        } 
        
        arr[front]= data;
    }   


    void pushFront(int data) {
        //Queue Full

        //single element case - > first element

        //circular nature

        //normal flow

        //TODO: add one more condition in the QUEUE FULL if block
        if((front == 0 && rear == size-1)) {
            cout << "Q is fulll, cannot insert" << endl;
            return;
        }
        else if(front == -1) {
            front = rear = 0;                    
        }
        else if(rear == size-1 && front != 0 ) {
            rear = 0;
                
        }
        else{
            rear++;
        } 
        
        arr[rear]= data;
    }


    void popFront() {
        //empty check
        //single element
        //circular nature
        //normal flow
        if(front == -1) {
                cout << "Q is empty , cannot pop" << endl;
        }
        else if (front == rear) {
                arr[front] = -1;
                front = -1;
                rear = -1;  
        }
        else if(front == size-1) {
                front = 0;
        }
        else {
                front++;
        }
    }

    void popRear() {
        //empty check
        //single element
        //circular nature
        //normal flow
        if(front == -1) {
                cout << "Q is empty , cannot pop" << endl;
        }
        else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;  
        }
        else if(rear == 0) {
            rear = size-1;
        }
        else {
            rear--;
        }
    }
};

int main()
{
    
    return 0;
}