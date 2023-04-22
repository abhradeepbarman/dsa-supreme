#include<bits/stdc++.h>
using namespace std;


void util(int* p) {

    // p = p + 1;
    *p = *p + 1;
}

void solve(int** ptr) {

    // ptr = ptr + 1;
    // *ptr = *ptr + 1;
    **ptr = **ptr + 1;
}

int main()
{
    // int a = 5;
    // int* p = &a;
    // int** q = &p;    

    // cout << a << endl;
    // cout << &a << endl;
    // cout << p << endl;
    // cout << &p << endl;
    // cout << *p << endl;
    // cout << q << endl;
    // cout << &q << endl;
    // cout << *q << endl;
    // cout << **q << endl;





    // int a = 5;
    // int* p = &a;

    // cout << "Before:" << endl;
    // cout << a << endl;
    // cout << p << endl;
    // cout << *p << endl;

    // util(p);
    // // pointers --> pass by value

    // cout << "After:" << endl;
    // cout << a << endl;
    // cout << p << endl;
    // cout << *p << endl;





    // int x = 12;
    // int* p = &x;
    // int** q = &p;

    // solve(q);
    // cout << x << endl;






    return 0;
}