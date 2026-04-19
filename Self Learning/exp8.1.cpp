/* 1. Write a C++ program to create a class named Complex that stores real and imaginary parts of a complex number and accepts input from the user. */

#include <iostream>
using namespace std;

class Complex
{
public:
    float real, imag;

    void input()
    {
        cout << "Enter real and imaginary part: ";
        cin >> real >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c;
    c.input();
    c.display();

    return 0;
}

/*
OUTPUT
Enter real and imaginary part: 45 2
45 + 2i
*/