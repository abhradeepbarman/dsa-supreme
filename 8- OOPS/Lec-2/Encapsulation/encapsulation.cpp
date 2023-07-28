#include<bits/stdc++.h>
using namespace std;

class Animal {
    //perfect encapsulation --> all data memebers are private
    private:
        int age;
        int weight;

    public:
        void eat() { 
            cout << "eating" << endl;
        }

        //getter
        int getAge() {
            return this->age;
        }
        int getWeight() {
            return this->weight;
        }

        //setter
        void setAge(int age) {
            this->age = age;
        }
        void setWeight(int weight) {
            this->weight = weight;
        }

};

int main()
{
    
    return 0;
}