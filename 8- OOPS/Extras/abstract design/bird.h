#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>
using namespace std;

class Bird{
    public:
        virtual void eat() = 0;
        virtual void fly() = 0;

        //classes that inherits this class
        //has to implement pure virtual function
};

class Sparrow: public Bird {
    public:
        void eat() {
            cout << "sparrow is eating" << endl;
        }
        void fly() {
            cout << "sparrow is flying" << endl;
        }
};

class Eagle: public Bird {
    public:
        void eat() {
            cout << "Eagle is eating" << endl;
        }
        void fly() {
            cout << "Eagle is flying" << endl;
        }
};

class Pigeon: public Bird {
    public:
        void eat() {
            cout << "Pigeon is eating" << endl;
        }
        void fly() {
            cout << "Pigeon is flying" << endl;
        }
};

#endif // BIRD_H
