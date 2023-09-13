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

    void insertion(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

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
            int left = 2*i;
            int right = 2*i+1;
            int largest = i;

            if(left <= size && arr[largest] < arr[left]) {
                largest = left;
            }

            if(right <= size && arr[largest] < arr[right]) {
                largest = right;
            }

            if(i == largest) {
                //already at correct pos
                break;
            }
            else {
                swap(arr[i], arr[largest]);
                i = largest;
            }
        }
    }

    void print() {
        for(int i=1; i<=size; i++) {
            cout << arr[i] << " ";
        } cout << endl;
    }
};

int main()
{
    Heap h;
    h.insertion(50);
    h.insertion(55);
    h.insertion(53);
    h.insertion(52);
    h.insertion(54);

    h.deletion();
    h.deletion();

    h.print();
    
    return 0;
}