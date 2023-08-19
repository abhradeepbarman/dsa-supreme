#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // //creation
    // stack<int> st;

    // //insertion
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);

    // //remove
    // st.pop();

    // //check element on top
    // cout << "Element on top: " << st.top() << endl;

    // //size
    // cout << "size of stack: " << st.size() << endl;


    // //check empty or not
    // if(st.empty()) {
    //     cout << "Empty stack" << endl;
    // }
    // else {
    //     cout << "Not empty stack" << endl;
    // }




    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    //print 
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }



    return 0;
}