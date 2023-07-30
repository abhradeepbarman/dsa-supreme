#include<bits/stdc++.h>
using namespace std;

class abc {
    private:
        mutable int x;
        int *y;
    
    public:
        abc() {
            x = 0;
            y = new int(0);
        }

        int getX() const{
            x = 10;
            return x;
        }
        int getY() const {
            return *y;
        }

        void setX(int val) {
            this->x = val;
        }
        void setY(int val) {
            *y = val;
        }
};

int main() {
    abc obj;
    cout << obj.getX() << endl;
    cout << obj.getY() << endl;

    return 0;
}

int main2()
{
    // 1. INTRODUCTION
    // // x is constant
    // // initialization can be done
    // // but we can't re-assign

    // const int x = 35;
    // cout << x << endl;
     


    // 2. const with pointers 

    //CONST data, NON-CONST pointer
    // const int *a = new int(2);  
    // // int const* a = new int(2); //same as line 17
    // cout << *a << endl;

    // // *a = 20 // can't change the content of pointer
    // int b = 20;
    // a = &b; //pointer it self can be re-assigned

    // cout << *a << endl;



    //CONST pointer, but NON-CONST data
    // int *const a = new int(5);
    // cout << *a << endl;

    // *a = 20;
    // cout << *a << endl;



    //CONST data, CONST pointer
    // const int *const a = new int(5);
    // cout << *a << endl;

    // *a = 10; //error
    // cout << *a << endl;
    

    return 0;
}