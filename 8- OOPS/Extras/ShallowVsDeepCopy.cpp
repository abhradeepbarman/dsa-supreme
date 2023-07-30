#include<bits/stdc++.h>
using namespace std;

class abc {
    public:
    int x;
    int* y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    //default dumb copy ctor : it does SHALLOW COPY
    // abc(const abc& obj) {
    //     x = obj.x;
    //     y = obj.y;
    // }


    //DEEP COPY
    abc(const abc& obj) {
        x = obj.x;
        y = new int(*obj.y);
    }

    void print() const
    {
        cout << "x: " << x << endl;
        cout << "PTR y: " << y << endl;
        cout << "content of y: " << *y << endl;
    }
};

int main()
{   
    abc a(1,2);
    a.print();


    // abc b(a);
    abc b = a;
    b.print();

    
    return 0;
}