#include<bits/stdc++.h>
using namespace std;

class Heap {
    public:
    int arr[101];
    int size;

    Heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {

        size = size + 1;
        int index = size;
        arr[index] = val;

        //take value to its correct pos
        while(index > 1) {
            int parent = index / 2;

            if(arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else {
                return;
            }
        }
    }

    void deletion() {
        if(size == 0) {
            cout << "nothing to delete" << endl;
            return;
        }

        //put last element into first index
        arr[1] = arr[size];
        //remove last element
        size--;

        //take root node to its correct pos
        int i = 1;
        while(i < size) {
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            int largest = i;

            if(leftIndex < size && arr[largest] < arr[leftIndex]) {
                largest = leftIndex;
            }

            if(rightIndex < size && arr[largest] < arr[rightIndex]) {
                largest = rightIndex;
            }

            if(i == largest) {
                //already at correct pos
                return;
            }
            else {
                swap(arr[i], arr[largest]);
            }
        }
    }


    void print() {
        for(int i=1; i<=size; i++) {
            cout << arr[i] << " ";
        } cout << endl;
    }
};


void heapify(int arr[], int n, int i) {

    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left < n && arr[largest] < arr[left]) {
        largest = left;
    }

    if(right < n && arr[largest] < arr[right]) {
        largest == right;
    }

    if(largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}


int main()
{
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.deletion();

    h.print();
    
    return 0;
}