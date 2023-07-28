#include<bits/stdc++.h>
using namespace std;

class A {
    public:

    void print() {
        cout << "hello" << endl;
    }
};

class B {
    public:

    void print() {
        cout << "Namaste" << endl;
    }
};

class C: public A, public B {

};

int main()
{

    C obj;

    obj.A::print();
    obj.B::print();
    
    return 0;
}