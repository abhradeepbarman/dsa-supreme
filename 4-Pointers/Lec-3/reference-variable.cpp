#include<bits/stdc++.h>
using namespace std;

// pass by reference
void solve(int &num) {

    num++;
}


// here we're doing --> pointer -- pass by reference
void util(int*& p) {

    p = p + 1;
}


int main()
{
    // int a = 5;
    // // creating reference variable
    // int& b = a;

    // cout << "value of a: " << a << endl;
    // cout << "address of a: " << &a << endl;

    // cout << "value of b: " << b << endl;
    // cout << "address of b: " << &b << endl;

    // a++;
    // cout << a << endl;
    // cout << b << endl;

    // b++;
    // cout << a << endl;
    // cout << b << endl;





    // int a = 5;
    // solve(a);

    // cout << a << endl;




    // int a = 5;
    // int *p = &a;

    // cout << "before: " << p << endl;
    // util(p);
    // cout << "after: " << p << endl;

    return 0;
}