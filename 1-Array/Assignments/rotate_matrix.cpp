#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int> > arr = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };


  // in-place transpose
  for(int i=0; i<arr.size(); i++) {
    for(int j=i; j<arr[0].size(); j++) {
      swap(arr[i][j], arr[j][i]);
    }
  }

  // reverse rows
  for(int i=0; i<arr.size(); i++) {

    int s = 0;
    int e = arr[0].size()-1;

    while(s < e) {
      swap(arr[i][s], arr[i][e]);
      s++, e--;
    }
  }

  // print arr
  for(int i=0; i<arr.size(); i++) {
    for(int j=0; j<arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  
}