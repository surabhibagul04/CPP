/*2. Write a C++ program to create a derived class that defines a display function with the same name as in the base class. */

#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived class display" << endl;
    }
};

int main()
{
    Derived d;
    d.display();

    return 0;
}

//output
// Derived class display