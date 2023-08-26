#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //creation
    queue<int> q;

    //insertion
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);

    //deletion
    q.pop();

    //size
    cout << q.size() << endl;

    //check empty or not
    if(q.empty()) {
        cout << "queue is empty" << endl;
    }
    else {
        cout << "queue is not empty" << endl;
    }

    
    //front element
    cout << q.front() << endl;
    
    //back element
    cout << q.back() << endl;

    return 0;
}