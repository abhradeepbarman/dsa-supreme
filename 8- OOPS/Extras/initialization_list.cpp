#include<bits/stdc++.h>
using namespace std;

class abc {
    private:
        const int x;
        int y;
    
    public:

        //ctor -- old style
        // abc(int _x, int _y) {
        //     x = _x;
        //     y = _y;
        // }

        //initialization list
        //we can initialise const variables also with this
        abc(int _x, int _y) : x(_x), y(_y) {
            cout << "in init list";
        }

};

int main() {

    return 0;
}