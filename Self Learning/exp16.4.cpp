/* 4. Write a C++ program to handle the divide-by-zero exception using exception handling and display a suitable error message when such a condition occurs. */
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
            throw "Divide by zero error";

        cout << "Result = " << a / b;
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg;
    }

    return 0;
}

/*output
Enter two numbers: 12 60 
Result = 0 */