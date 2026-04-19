/*2. Write a C++ program to demonstrate operator overloading by defining custom behavior for at least one operator in a class. */

#include <iostream>
using namespace std;

class Demo
{
public:
    int x;

    Demo(int a)
    {
        x = a;
    }

    // Overload unary -
    Demo operator-()
    {
        return Demo(-x);
    }

    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    Demo d1(10);
    Demo d2 = -d1;

    d2.display();

    return 0;
}

//output
//Value = -10