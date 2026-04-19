/* 4. Write a C++ program to overload the + operator to perform addition of two complex numbers using objects of the Complex class */

#include <iostream>
using namespace std;

class Complex
{
public:
    float real, imag;

    void input()
    {
        cin >> real >> imag;
    }

    // Overload + operator
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter two complex numbers: ";
    c1.input();
    c2.input();

    c3 = c1 + c2;

    cout << "Sum = ";
    c3.display();

    return 0;
}

/* OUTPUT 
Enter two complex numbers: 3 4 5 6 
Sum = 8 + 10i */