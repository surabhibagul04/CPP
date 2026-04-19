/* 1. Write a C++ program to create a base class with a display function that shows basic information.  */

#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "This is Base class display function" << endl;
    }
};

int main()
{
    Base b;
    b.display();

    return 0;
}

//output
//This is Base class display function