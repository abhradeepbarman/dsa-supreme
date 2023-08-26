#include<bits/stdc++.h>
using namespace std;

class Queue {
    public:
    
    int size;
    int* arr;
    int front;
    int rear;

    Queue(int size) {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    //functions
    void push(int data) {
  
        if(rear == size) {
            cout << "Queue is Full" << endl;
        }
        else {
            arr[rear] = data;
            rear++;
        }
    }

    void pop() {

        if(front == rear) {
            cout << "Queue is empty" << endl;
        }
        else {
            front++;

            //IMPORTANT: whenever front & rear become same. that means queue is empty. 
            //Now start inserting from 0
            if(front == rear) {
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront() {
        
        if(front == rear) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else {
            return arr[front];
        }
    }

    bool isEmpty() {

        if(front == rear) {
            return true;
        } 
        else {
            return false;
        }
    }

    int getSize() {
        return rear - front;
    }

};

int main()
{
    Queue q(10);

    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);

    cout << "size of queue: " << q.getSize() << endl;

    q.pop();

    cout << "size of queue: " << q.getSize() << endl;

    cout << "Front element: " << q.getFront() << endl;

    if(q.isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}