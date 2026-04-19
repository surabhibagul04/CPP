/* Write a C++ program to declare a friend function inside a class to allow access to its private data
members. */

#include <iostream>
using namespace std;

class Demo
{
private:
    int num;  // private data member

public:
    // Constructor to initialize value
    Demo(int n)
    {
        num = n;
    }

    // Declare friend function
    friend void show(Demo d);
};

// Friend function definition
void show(Demo d)
{
    // Accessing private member
    cout << "Value = " << d.num << endl;
}

int main()
{
    Demo obj(100);

    // Calling friend function
    show(obj);

    return 0;
}

//OUTPUT
//Value = 100