/* 3. Write a C++ program that uses a try-catch block to handle errors that may occur during division of two numbers*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw b;

        cout << "Result = " << a / b;
    }
    catch (int)
    {
        cout << "Error: Division by zero!";
    }

    return 0;
}

/*output
Enter two numbers: 12 42
Result = 0 */