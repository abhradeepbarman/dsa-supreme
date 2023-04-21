#include<bits/stdc++.h>
using namespace std;

void findMin(int arr[], int n, int i, int& mini) {

    //base case
    if(i == n)
        return;
    
    //processing
    mini = min(arr[i], mini);

    //recursive relation
    findMin(arr, n, i+1, mini);
}

int main()
{
    int arr[] = {11, 10, 9, 8, 15, 2, 19, 22};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    int mini = INT_MAX;

    findMin(arr, n, i, mini);
    cout << "min element = " << mini << endl;

    return 0;
}