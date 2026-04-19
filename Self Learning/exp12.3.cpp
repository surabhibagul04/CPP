/* 3. Write a C++ program to demonstrate function overriding by creating a base class and redefining a function in the derived class with the same name.*/

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
//Derived class display