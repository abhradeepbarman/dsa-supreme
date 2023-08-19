#include<bits/stdc++.h>
using namespace std;

void printMid(stack<int> &s, int &totalSize) {

    if(totalSize == 0)  {
        cout << "empty stack" << endl;
        return;
    }

    //base case
    if(s.size() == totalSize / 2 + 1) {
        cout << "Middle element: "  << s.top() << endl;
        return;
    }

    //processing
    int temp = s.top();
    s.pop();

    //RE
    printMid(s, totalSize);

    //backtrack
    s.push(temp);
}   

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);


    int totalSize = s.size();

    printMid(s, totalSize);

    return 0;
}