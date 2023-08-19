#include<bits/stdc++.h>
using namespace std;

class Stack {
    public:
    
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }


    //function

    void push1(int data) {
        if(top2 - top1 == 1) {
            cout << "Stack overflow" << endl;
        }
        else {
            top1++;
            arr[top1] = data;
        }
    } 

    void pop1() {
        if(top1 == -1) {
            cout << "Stack underflow" << endl;
        }
        else {
            top1--;
        }
    }

    void push2(int data) {
        if(top2 - top1 == 1) {
            cout << "Stack overflow" << endl;
        }
        else {
            top2--;
            arr[top2] = data;
        }
    } 

    void pop2() {
        if(top2 == size) {
            cout << "Stack underflow" << endl;
        }
        else {
            top2++;
        }
    }
};

int main()
{

    Stack s(5);

    s.push1(10);
    s.push2(20);
    s.push1(30);
    s.push2(40);
    s.push1(50);
    
    return 0;
}