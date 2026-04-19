/*5. Write a C++ program to demonstrate runtime polymorphism using virtual functions by calling overridden functions through a base class pointer */
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

class Derived1 : public Base
{
public:
    void show()
    {
        cout << "Derived1 class show" << endl;
    }
};

class Derived2 : public Base
{
public:
    void show()
    {
        cout << "Derived2 class show" << endl;
    }
};

int main()
{
    Base* ptr;
    Derived1 d1;
    Derived2 d2;

    ptr = &d1;
    ptr->show();

    ptr = &d2;
    ptr->show();

    return 0;
}

/*output
Derived1 class show
Derived2 class show */