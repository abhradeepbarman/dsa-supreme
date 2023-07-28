#include<bits/stdc++.h>
using namespace std;

class A {
    public:
        int physics;
    
    A() {
        physics = 12;
    }
};

class B {
    public:
        int chemistry;
    
    B() {
        chemistry = 13;
    }
};

class C: public A, public B {

};

int main()
{
    C obj;

    cout << obj.physics << " " << obj.chemistry << endl;
    
    return 0;
}