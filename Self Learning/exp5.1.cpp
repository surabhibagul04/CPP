/* Write a C++ program to perform addition of two numbers using a normal function and display the
result.*/

#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    return num1 + num2;
}

int main ()
{
    int num1, num2, result;

    cout<<"Enter two numbers to add:";
    cin>> num1>> num2;

    //function call

    result = add(num1, num2);

    cout <<"Sum = " << result;

    return 0;
}

/*OUTPUT
Enter two numbers to add:45 67 
Sum = 112
*/