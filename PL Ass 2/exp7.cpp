// Operator Overloading
// Complex Number Class with Operator Overloading

#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Default constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    // Operator +
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Operator *
    Complex operator*(Complex c)
    {
        Complex temp;
        // (a+bi)(c+di) = (ac - bd) + (ad + bc)i
        temp.real = real * c.real - imag * c.imag;
        temp.imag = real * c.imag + imag * c.real;
        return temp;
    }

    // Input operator >>
    friend istream &operator>>(istream &in, Complex &c)
    {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }

    // Output operator <<
    friend ostream &operator<<(ostream &out, Complex c)
    {
        out << c.real;
        if (c.imag >= 0)
            out << "+" << c.imag << "i";
        else
            out << c.imag << "i";

        return out;
    }
};

int main()
{
    Complex c1, c2, sum, product;

    cin >> c1;
    cin >> c2;

    sum = c1 + c2;
    product = c1 * c2;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}