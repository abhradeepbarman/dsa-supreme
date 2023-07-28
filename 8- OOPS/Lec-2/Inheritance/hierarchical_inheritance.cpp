#include<bits/stdc++.h>
using namespace std;

class Car {
    public:
        int age;
        int weight;
        string name;

        void speedUp() {
            cout << "Speeding up" << endl;
        }
};

class Scorpio: public Car {

};

class Fortuner: public Car {

};

int main()
{
    Scorpio x;
    x.speedUp();

    Fortuner y;
    y.speedUp();

    
    return 0;
}