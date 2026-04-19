/* 5. Write a C++ program to overload the << and >> operators to input and display complex numbers in a proper format.*/

#include <iostream>
using namespace std;

class Complex
{
public:
    float real, imag;

    // Overload >> operator
    friend istream& operator>>(istream &in, Complex &c)
    {
        cout << "Enter real and imaginary part: ";
        in >> c.real >> c.imag;
        return in;
    }

    // Overload << operator
    friend ostream& operator<<(ostream &out, Complex c)
    {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main()
{
    Complex c;

    cin >> c;
    cout << "Complex Number = " << c;

    return 0;
}

/*output
Enter real and imaginary part: 4 3 
Complex Number = 4 + 3i
*/