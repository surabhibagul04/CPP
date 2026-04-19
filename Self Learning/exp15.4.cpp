/* 4. Write a C++ program to perform addition of two numbers using a template function. */

#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Sum (int): " << add(10, 20) << endl;
    cout << "Sum (float): " << add(2.5f, 3.5f) << endl;

    return 0;
}

/*output
Sum (int): 30
Sum (float): 6 */