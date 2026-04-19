/* 5. Write a C++ program to compare operator overloading and function overriding by implementing both concepts and showing their differences in behavior*/

#include <iostream>
using namespace std;

// Operator Overloading
class Number
{
public:
    int value;

    Number(int v)
    {
        value = v;
    }

    Number operator+(Number n)
    {
        return Number(value + n.value);
    }
};

// Function Overriding
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
    // Operator Overloading
    Number n1(5), n2(10);
    Number n3 = n1 + n2;
    cout << "Sum = " << n3.value << endl;

    // Function Overriding
    Base* ptr;
    Derived d;

    ptr = &d;
    ptr->show();  // runtime behavior

    return 0;
}

/* output
Sum = 15
Derived class show
*/