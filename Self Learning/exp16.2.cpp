/* 2. Write a C++ program to check whether the divisor is zero before performing division and display an appropriate message if division is not possible. */

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (b == 0)
        cout << "Division not possible (divide by zero)";
    else
        cout << "Result = " << a / b;

    return 0;
}

/*output
Enter two numbers: 45 32 
Result = 1*/