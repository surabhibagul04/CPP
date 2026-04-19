/* 5. Write a C++ program to demonstrate the use of a template function with different data types such as int, float, and char 
*/

#include <iostream>
using namespace std;

template <class T>
void display(T value)
{
    cout << "Value = " << value << endl;
}

int main()
{
    display(10);        // int
    display(5.5f);      // float
    display('A');       // char

    return 0;
}

/*output
Value = 10
Value = 5.5
Value = A */