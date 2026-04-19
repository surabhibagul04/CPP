/*5. Write a C++ program to demonstrate both compile-time polymorphism (function overloading) and runtime polymorphism (function overriding) in a single program. */

#include <iostream>
using namespace std;

class Demo
{
public:
    // Function Overloading (Compile-time)
    void add(int a, int b)
    {
        cout << "Sum (int) = " << a + b << endl;
    }

    void add(float a, float b)
    {
        cout << "Sum (float) = " << a + b << endl;
    }

    // Virtual function (Runtime)
    virtual void show()
    {
        cout << "Base class show" << endl;
    }
};

class Derived : public Demo
{
public:
    void show()
    {
        cout << "Derived class show" << endl;
    }
};

int main()
{
    Demo d;
    d.add(10, 20);
    d.add(5.5f, 2.5f);

    Demo* ptr;
    Derived obj;

    ptr = &obj;
    ptr->show();  // runtime polymorphism

    return 0;
}

/*output
Sum (int) = 30
Sum (float) = 8
Derived class show */