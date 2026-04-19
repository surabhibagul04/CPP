/* 1. Write a C++ program to swap two integer values using a function. */

#include <iostream>
using namespace std;

void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    swapInt(x, y);

    cout << "After swap: " << x << " " << y;

    return 0;
}

//output
//After swap: 20 10