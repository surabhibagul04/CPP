/* 2. Write a C++ program to swap two float values using a function */

#include <iostream>
using namespace std;

void swapFloat(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

int main()
{
    float x = 1.5, y = 2.5;

    swapFloat(x, y);

    cout << "After swap: " << x << " " << y;

    return 0;
}

//output
//After swap: 2.5 1.5