/*3. Write a C++ program to create a base class and a derived class to demonstrate inheritance. */
#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "This is Base class" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "This is Derived class" << endl;
    }
};

int main()
{
    Derived d;
    d.show();
    d.display();

    return 0;
}

/*output
This is Base class
This is Derived class */