#include<bits/stdc++.h>
using namespace std;


class twoStacks
{
    int size;
    int* arr;
    int top1;
    int top2;
    
    public:
    twoStacks()
    {
        size = 1000;
        arr = new int[size];
        top1 = -1;
        top2 = 1000;
    }
    
    twoStacks(int n)
    {
        size = n;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
 
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if(top2-top1 == 1) {
            //stack full;
        }
        else {
            top1++;
            arr[top1] = x;
        }
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
       if(top2-top1 == 1) {
            //stack full;
        }
        else {
            top2--;
            arr[top2] = x;
        }
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(top1 == -1) {
            //stack empty
            return -1;
        }
        else {
            int element = arr[top1];
            top1--;
            return element;
        }
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
       if(top2 == size) {
           //stack empty
           return -1;
       }
       else {
           int element = arr[top2];
           top2++;
           return element;
       }
    }
};


int main()
{
    
    return 0;
}