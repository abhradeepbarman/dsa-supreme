#include<bits/stdc++.h>
using namespace std;

// PROBLEM: reverse counting
// TAIL RECURSION

void printCount(int n) {

    //base case 
    if(n == 0)
        return;
    
    // processing
    cout << n << " ";

    // recursive relation
    printCount(n-1);
}

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;   

    printCount(n); 

    return 0;
}