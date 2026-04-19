/* 1. Write a C++ program to accept two numbers from the user and perform division, then display the result. */

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Result = " << a / b;

    return 0;
}
/*output
Enter two numbers: 3 2 
Result = 1 */