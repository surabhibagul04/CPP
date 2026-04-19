/* 3. Write a C++ program to create a template function that can swap two values of any data type. */

#include <iostream>
using namespace std;

template <class T>
void swapValue(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swapValue(x, y);
    cout << "Integers: " << x << " " << y << endl;

    float a = 1.1, b = 2.2;
    swapValue(a, b);
    cout << "Floats: " << a << " " << b;

    return 0;
}

/*output
Integers: 20 10
Floats: 2.2 1.1

*/