#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
        int age;

};

class Dog: public Animal {

};

int main()
{

    Dog d;
    cout << d.age << endl;
    
    return 0;
}