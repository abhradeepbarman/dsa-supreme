#include<bits/stdc++.h>
using namespace std;

#define PI 3.14159465
#define MAX(x, y) (x>y ? x : y)

float circleArea(float r) 
{
    return PI * r * r;
}

float circlePerimeter(float r) 
{
    return 2 * PI * r;
}

void fun() {
    int a = 5;
    int b = 6;
    int c = MAX(a, b);

    cout << c << endl;
}

int main()
{
    cout << "circle area = " << circleArea(5.4) << endl;
    cout << "circle perimeter = " << circlePerimeter(5.4) << endl;

    fun();

    return 0;
}