/* 2. Write a C++ program to demonstrate function overloading using different data types such as integer, float, and double as parameters.*/

#include <iostream>
using namespace std;

class Demo
{
public:
    void show(int a)
    {
        cout << "Integer: " << a << endl;
    }

    void show(float a)
    {
        cout << "Float: " << a << endl;
    }

    void show(double a)
    {
        cout << "Double: " << a << endl;
    }
};

int main()
{
    Demo d;
    d.show(10);
    d.show(10.5f);
    d.show(20.123);

    return 0;
}

/*output

Integer: 10
Float: 10.5
Double: 20.123 */