/* 2. Write a C++ program to define a member function in the Complex class to add two complex numbers and display the result. */

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

    Complex add(Complex c)
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

    cout << "Enter first complex number: ";
    c1.input();

    cout << "Enter second complex number: ";
    c2.input();

    c3 = c1.add(c2);

    cout << "Sum = ";
    c3.display();

    return 0;
}

/*OUTPUT
Enter first complex number: 43 
2
Enter second complex number: 334
4
Sum = 377 + 6i*/