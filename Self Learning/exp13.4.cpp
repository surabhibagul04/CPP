/* 4. Write a C++ program to override a function in the derived class and display different outputs using base and derived class objects*/

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class function" << endl;
    }
};

int main()
{
    Base b;
    Derived d;

    b.show();  // Base version
    d.show();  // Derived version

    return 0;
}

/*output
Base class function
Derived class function */