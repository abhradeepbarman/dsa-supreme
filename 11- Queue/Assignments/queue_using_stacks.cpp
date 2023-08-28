#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int ans = -1;
        if(!s2.empty()) {
            ans = s2.top();
        }
        else {
            //copy s1 to s2
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            ans = s2.top();
        }
        s2.pop();
        return ans;
    }
    
    int peek() {
        int ans = -1;
        if(!s2.empty()) {
            ans = s2.top();
        }
        else {
            //copy s1 to s2
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            ans = s2.top();
        }
        return ans;
    }
    
    bool empty() {
        return ( s1.empty() && s2.empty() );
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main()
{
    
    return 0;
}