/* 5. Write a C++ program to demonstrate exception handling by performing division and displaying either the result or an error message based on the input values.*/
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
            throw 0;

        cout << "Result = " << a / b << endl;
    }
    catch (int)
    {
        cout << "Error: Cannot divide by zero!" << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}

/*output
Enter two numbers: 34 75 
Result = 0
Program continues...


*/