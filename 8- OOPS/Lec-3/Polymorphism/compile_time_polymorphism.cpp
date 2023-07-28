#include<bits/stdc++.h>
using namespace std;

class Maths {
    public:

        // function overloading
        int sum(int a, int b) {
            cout << "First" << endl;
            return a + b;
        }
        int sum(int a, int b, int c) {
            cout << "Second" << endl;
            return a + b + c;
        }
        int sum(int a, int b, int c, int d) {
            cout << "Third" << endl;
            return a + b + c + d;
        }
};

class Parameter {
    public:
        int val;

    //operator overloading
    void operator +(Parameter& obj2) {
        int value1 = this->val;
        int value2 = obj2.val;

        cout << (value2 - value1) << endl;
    }

};

int main()
{
    //function overloading
    // Maths obj;

    // cout << obj.sum(3,5) << endl;
    // cout << obj.sum(5,4,9) << endl;
    

    

    //operator overloading
    Parameter obj1, obj2;

    obj1.val = 7;
    obj2.val = 2;

    //this should print the difference between them
    obj1 + obj2;

    return 0;
}