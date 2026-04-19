/* Write a C++ program to perform subtraction of two numbers using an inline function and display
the result. */

#include<iostream>
using namespace std;

inline int subtract(int num1, int num2)
{
    return num1 - num2;
}

int main ()
{
    int num1, num2, result;

    cout<<"Enter two numbers to subtract: ";
    cin>> num1 >> num2;

    result = subtract(num1, num2);

    cout<<"Result: "<< result << endl;

    return 0;
}

/*OUTPUT
Enter two numbers to subtract: 56 78
Result: -22*/