#include<bits/stdc++.h>
using namespace std;

class Stack {
    public:

    //properties
    int* arr;
    int top;
    int size;

    //ctor
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    //behaviour
    
    void push(int data) {
        
        if(size - top > 1) {
            //space available
            //insert
            top++;
            arr[top] = data;
        }
        else {
            cout << "Stack overflow" << endl;
        }
    }

    void pop() {

        if(top == -1) {
            // stack empty
            cout << "Stack underflow" << endl;
        }
        else {
            top--;
        }
    }

    int getTop() {

        if(top == -1)
            cout << "Stack empty" << endl;
        else 
            return arr[top];
    }

    int getSize() {
        return top+1;
    }

    bool isEmpty() {

        if(top == -1) {
            //stack empty
            return 1;
        }
        else {
            return 0;
        }
    }
};

int main()
{
    //creation
    Stack s(10);

    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    //print
    while(!s.isEmpty()) {
        cout << s.getTop() << " ";
        s.pop();
    }

    cout << endl << "Size of stack: " << s.getSize() << endl;
    
    return 0;
}