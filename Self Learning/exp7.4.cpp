/* 4. Write a C++ program to use a friend function to perform an operation (such as addition) using
private data members of a class.*/

#include <iostream>
using namespace std;

class Number
{
private:
    int a, b;  // private data members

public:
    // Constructor
    Number(int x, int y)
    {
        a = x;
        b = y;
    }

    // Declare friend function
    friend void add(Number n);
};

// Friend function definition
void add(Number n)
{
    int sum = n.a + n.b;  // accessing private members
    cout << "Sum = " << sum << endl;
}

int main()
{
    Number obj(10, 20);

    // Calling friend function
    add(obj);

    return 0;
}

//output
//Sum = 30