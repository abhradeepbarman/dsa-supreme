#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s, int& target) {
    
    //base case
    if(s.empty()) {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    //RE
    solve(s, target);

    //Backtrack
    s.push(topElement);
}

void insertAtBottom(stack<int> &s) {
    
    if(s.empty())  {
        cout << "Stack is empty" << endl;
        cout << "cannot insert at bottom" << endl;
    } 

    int target = s.top();
    s.pop();

    solve(s, target);
}

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    insertAtBottom(s);

    //print
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}