#include<bits/stdc++.h>
using namespace std;

void printDigits(int num) {

    // base case
    if(num == 0)
        return;

    // recursive relation
    printDigits(num / 10);

    // processing
    int digit = num % 10;
    cout << digit << " ";
}

int main()
{
    int num = 0647;

    printDigits(num);

    return 0;
}