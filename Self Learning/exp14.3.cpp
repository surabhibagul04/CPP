/*3. Write a C++ program to create a base class pointer and use it to call the display function of both base and derived class objects */

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
    Base* ptr;
    Base b;
    Derived d;

    ptr = &b;
    ptr->display();  // Base

    ptr = &d;
    ptr->display();  // Base (no virtual)

    return 0;
}

/*output
base class dissplay
base class display
*/