#include<bits/stdc++.h>
using namespace std;

class abc {
    public:
    static int x, y;

    static void print()
    {
        cout << x << " " << y << endl;
    }
};

// static member initialization
int abc::x;
int abc::y;

int main()
{
    abc obj1;
    abc::x = 2;
    abc::y = 5;
    abc::print();

    abc obj2;
    abc::x = 20;
    abc::y = 50;
    abc::print();

    abc::print();
      
    return 0;
}