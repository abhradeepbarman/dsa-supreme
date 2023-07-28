#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:

        Animal() {
            cout << "I am inside Animal constructor" << endl;
        }


        // virtual keyword
        void speak() {
            cout << "Speaking" << endl;
        }
};

class Dog: public Animal {
    public:
    
        Dog() {
            cout << "I am inside Dog constructor" << endl;
        }

        //function/method override
        void speak() {
            cout << "Barking" << endl;
        }
};

int main()
{
    // Animal a;
    // a.speak();

    // Dog b;
    // b.speak();
    

    // Animal* a = new Animal();
    // a->speak();


    // Dog* a = new Dog();
    // a->speak();


    ////UpCasting
    // Animal* a = new Dog();
    // a->speak();


    // //DownCasting
    // Dog* b = (Dog* ) new Animal();
    // b->speak();

    return 0;
}