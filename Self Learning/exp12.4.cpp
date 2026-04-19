/*4. Write a C++ program using base and derived classes to show how the same function name can produce different outputs depending on the object used. */

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class show" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class show" << endl;
    }
};

int main()
{
    Base* ptr;
    Derived d;

    ptr = &d;
    ptr->show();  // calls derived version

    return 0;
}

//output
//Derived class show