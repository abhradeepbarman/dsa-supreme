#include<bits/stdc++.h>
using namespace std;

int x = 4; // Global variable


int main()
{
    cout << x << endl;
    int x = 50; //local variable
    cout << x << endl;
    cout << ::x << endl; // accessing global variable with ::

    //scoped
    {
        int x = 50;
        cout << x << endl;
        cout << ::x << endl; //access global variable
    }
    
    return 0;
}