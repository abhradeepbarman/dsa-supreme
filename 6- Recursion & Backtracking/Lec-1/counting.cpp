#include<bits/stdc++.h>
using namespace std;

// PROBLEM: counting from 1 to N
// HEAD RECURSION

void printCount(int n) {

    //base case 
    if(n == 0)
        return;
    
    // recursive relation
    printCount(n-1);

    // processing
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;   

    printCount(n); 

    return 0;
}