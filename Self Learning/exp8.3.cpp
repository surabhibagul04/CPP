/* 3. Write a C++ program to define a member function to multiply two complex numbers and display the result*/

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

    Complex multiply(Complex c)
    {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
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

    c3 = c1.multiply(c2);

    cout << "Product = ";
    c3.display();

    return 0;
}

/*output
Enter two complex numbers: 4 3 2 1 
Product = 5 + 10i*/