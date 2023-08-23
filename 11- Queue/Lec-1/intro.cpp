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

    //size
    cout << q.size() << endl;

    //deletion
    q.pop();

    //check empty or not
    if(q.empty()) {
        cout << "queue is empty" << endl;
    }
    else {
        cout << "queue is not empty" << endl;
    }

    
    //front element
    cout << q.front() << endl;
    


    return 0;
}