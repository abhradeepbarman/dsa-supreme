#include<bits/stdc++.h>
using namespace std;

class Animal { 

    //Access Modifier
    private:
    int weight;

    //state or properties
    public:
    int age;
    string name;

    //behaviour
    void eat() {
        cout << "Eating" << endl;
    }

    void sleep() {
        cout << "Sleeping" << endl;

    }

    void print() {
        cout << this->name << " " << this->age << " " << this->weight << endl;
    }

    // Constructor -> object initialization

    //Default Constructor
    Animal() {
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout << "constructor called" << endl;
    }

    //Parameterised Constructor
    Animal(int age) {
        this->age = age;
        cout << "parameterised constructor called" << endl;
    }

    Animal(int age, int weight) {
        this->age = age;
        this->weight = weight;
        cout << "parameterised constructor 2 called" << endl;
    }

    Animal(int age, int weight, string name) {
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout << "parameterised constructor 3 called" << endl;
    }

    //copy constructor
    Animal(Animal& obj) {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;

        cout << "copy constructor called" << endl;
    }

    //If we want to access private data,
    //we have to use getter & setter

    //getter
    int getWeight() {
        return weight;
    }

    //setter
    void setWeight(int weight) {
        this->weight = weight;
    }


    //Destructor
    ~Animal() {
        cout << "Destructor called" << endl;
    }

};

int main()
{
    //Object creation

    //Static
    // Animal dog;
    // dog.age = 5;
    // dog.name = "Rocky";

    // cout << "name of animal: " << dog.name << endl;
    // cout << "age of animal: " << dog.age << endl;

    // dog.eat();
    // dog.sleep();

    // dog.setWeight(101);
    // cout << "weight of animal: " << dog.getWeight() << endl;




    //Dynamic Memory
    // Animal* dog = new Animal;

    // (*dog).age = 18;
    // (*dog).name = "Puppy";

    // //alternate - dynamic
    // dog->age = 15;
    // dog->name = "Rocky";

    // cout << "name of animal: " << dog->name << endl;
    // cout << "age of animal: " << dog->age << endl;

    // dog->setWeight(50);
    // cout << "weight of animal: " << dog->getWeight() << endl;

    // dog->eat();
    // dog->sleep();




    //constructor call
    // Animal dog;
    // Animal* cat = new Animal;

    // Animal dog(10);
    // Animal* cat = new Animal(20, 50);
    // Animal horse(20, 70, "Raftaar");




    //object copy
    // Animal lion(horse);
    // Animal lion = horse;


    // lion.print();
    // horse.print();

    // lion.name[0] = 'V';

    // lion.print();
    // horse.print();


    


    //Destructor call
    //static object -> automatically call
    //dyamic object -> manually call

    // Animal a;
    // a.age = 5;

    // Animal* b = new Animal;
    // b->age = 12;
    // delete b;


    return 0;
}