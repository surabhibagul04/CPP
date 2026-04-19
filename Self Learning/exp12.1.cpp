/*1. Write a C++ program to demonstrate function overloading by creating multiple functions with the same name but different parameter lists */

#include <iostream>
using namespace std;

class Demo
{
public:
    void add(int a, int b)
    {
        cout << "Sum (2 ints) = " << a + b << endl;
    }

    void add(int a, int b, int c)
    {
        cout << "Sum (3 ints) = " << a + b + c << endl;
    }
};

int main()
{
    Demo d;
    d.add(10, 20);
    d.add(10, 20, 30);

    return 0;
}
/*output
Sum (2 ints) = 30
Sum (3 ints) = 60 

*/