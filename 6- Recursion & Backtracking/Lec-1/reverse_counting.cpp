#include<bits/stdc++.h>
using namespace std;

//Tail Recursion

void reverseCount(int n) {

    //Base case
    if(n == 0)
        return;

    //processing
    cout << n << " ";

    //recursive relation
    reverseCount(n-1);
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    reverseCount(n);
    
    return 0;
}