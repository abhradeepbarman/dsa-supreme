#include<bits/stdc++.h>
using namespace std;

class Base {
    public:
    Base() {
        cout << "base ctor" << endl;
    }

    virtual ~Base() {
        cout << "base dtor" << endl;
    }

};

class Derived: public Base {
    public:
    Derived() {
        cout << "derived ctor" << endl;
    }

    ~Derived() {
        cout << "derived dtor" << endl;
    }

};

int main()
{
    Base *b = new Derived();
    delete b;
    
    return 0;
}