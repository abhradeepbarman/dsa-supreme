#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int>& s, int target) {
    
    //base case
    if(s.empty() || s.top() < target) {
		s.push(target);
		return;
	}

    int temp = s.top();
    s.pop();

    //RE
    insertSorted(s, target);

    //backtrack
    s.push(temp);
}

void sortStack(stack<int>& s) {

    //base case
    if(s.empty()) {
        return;
    }

    int target = s.top();
    s.pop();

    //RE
    sortStack(s);

    insertSorted(s, target);
}

int main()
{
    stack<int> s;

    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);
    
    sortStack(s);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}