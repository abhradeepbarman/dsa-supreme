#include<iostream>
#include<deque>
using namespace std;

int main()
{
    //creation
    deque<int> dq;

    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(20);
    dq.push_back(30); 


    cout << "size: " << dq.size() << endl;

    dq.pop_front();
    dq.pop_back();

    cout << "size: " << dq.size() << endl;

    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    if(dq.empty()) {
        cout << "DQ is empty" << endl;
    } 
    else {
        cout << "DQ is not empty" << endl;
    }

    
    return 0;
}