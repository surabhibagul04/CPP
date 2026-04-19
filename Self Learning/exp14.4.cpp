/* 4. Write a C++ program to use the virtual keyword with a base class function and observe how the function call is resolved at runtime.*/

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
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
    Derived d;

    ptr = &d;
    ptr->display();  // Derived (runtime)

    return 0;
}

//output
//derived class display