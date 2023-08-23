#include<iostream>
using namespace std;

class CircularQueue {
    public:

    int size;
    int* arr;
    int front;
    int rear;

    CircularQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    //functions
    bool isEmpty() {
        if(front == rear) {
            return true;
        }
        else {
            return false;
        }
    }

    bool isFull() {
        if( (rear+1)%size == front) {
            return true;
        }
        else {
            return false;
        }
    }   

    void enqueue(int data) {
        if(isFull()) {
            cout << "Queue is full" << endl;
        } else {
            rear = (rear + 1) % size;
            arr[rear] = data;
        }
    }

    void dequeue() {
        if(isEmpty()) {
            cout << "Queue is empty" << endl;
        }
        else {
            front = (front + 1) % size;
        }
    }

    int getFront() {
        if(front == rear) {
            cout << "Queue is empty" << endl;
        }
        else {
            return arr[(front+1) % size];
        }
    }

    int getSize() {
        return rear - front;
    }
};


//Mod Operator is a Heavy Operator. So We will not use it.

class CirQueue{
        public:
        int size;
        int *arr;
        int front;
        int rear;

        CirQueue(int size) {
                this->size = size;
                arr = new int[size];
                front = -1;
                rear = -1;
        }

        void push(int data) {
                //Queue Full

                //single element case - > first element

                //circular nature

                //normal flow
                //TODO: add one more condition in the QUEUE FULL if block
                if((front == 0 && rear == size-1)) {
                        cout << "Q is fulll, cannot insert" << endl;
                }
                else if(front == -1) {
                        front = rear = 0;
                        arr[rear] = data;
                }
                else if(rear == size-1 && front != 0 ) {
                        rear = 0;
                        arr[rear] = data;
                }
                else{
                        rear++;
                        arr[rear]= data;
                } 
        }

        void pop() {
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

};

int main()
{
    CircularQueue q(5);

    q.enqueue(1);
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(7);
    
    q.dequeue();

    q.enqueue(9);

    cout << q.getFront() << endl;
    cout << q.getSize() << endl;

    return 0;
}