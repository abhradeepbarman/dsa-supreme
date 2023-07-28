#include<bits/stdc++.h>
using namespace std;

class Animal {
    protected:
        int age;

};

//inheritance
class Dog: private Animal {

    public:
        void print() {
            cout << this->age;
        }
};

int main()
{
    Dog a;
    // cout << a.age;
    // a.print();

    return 0;
}