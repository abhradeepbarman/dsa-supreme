#include<bits/stdc++.h>
using namespace std;

void printDigits(int num) {

    //base case
    if(num == 0)
        return;
 
    //R.R
    printDigits(num/10);

    //processing
    cout << num % 10 << " ";
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    printDigits(num);
    
    return 0;
}