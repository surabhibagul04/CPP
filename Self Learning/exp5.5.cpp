/*Write a C++ program to perform basic arithmetic operations such as addition, subtraction,
multiplication, and division using inline functions. */

#include <iostream>
using namespace std;

inline int add(int num1, int num2)
{
    return num1 + num2;
}

inline int subtract(int num1, int num2)
{
    return num1 - num2;
}

inline int multiply(int num1, int num2)
{
    return num1 * num2;
}

inline float divide(int num1, int num2)
{
    return num1 / num2;
}

int main ()
{
    int num1, num2;

    cout<<"Enter two numbers: ";
    cin >> num1 >> num2;

    cout<<"Addition = " << add(num1, num2) <<endl;
     cout<<"Subtraction = " << subtract(num1, num2) <<endl;
      cout<<"Multiplication = " << multiply(num1, num2) <<endl;
       cout<<"Division = " << divide(num1, num2) <<endl;

       return 0;


}

/*OUTPUT

Enter two numbers: 56 2
Addition = 58
Subtraction = 54
Multiplication = 112
Division = 28

*/
