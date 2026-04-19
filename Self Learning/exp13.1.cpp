/*1. Write a C++ program to overload the + operator for a user-defined class to perform addition of two objects */

#include <iostream>
using namespace std;

class Number
{
public:
    int value;

    Number(int v)
    {
        value = v;
    }

    // Overload + operator
    Number operator+(Number n)
    {
        return Number(value + n.value);
    }

    void display()
    {
        cout << "Sum = " << value << endl;
    }
};

int main()
{
    Number n1(10), n2(20);
    Number n3 = n1 + n2;

    n3.display();

    return 0;
}

//output
//Sum = 30