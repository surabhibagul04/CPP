/* 2. Write a C++ program to perform addition of two numbers using an inline function and display the
result. */

#include<iostream>
using namespace std;

//Inline function to add two numbers
inline int add(int num1, int num2)
{
    return num1 + num2;
}

int main ()
{
    int num1, num2, result;

    cout <<"Enter two numebers two add: ";
    cin >> num1 >> num2; 

    //      Function call
    result = add(num1, num2);

    cout <<"Sum = " <<result;

    return 0;
}

/*OUTPUT
Enter two numebers two add: 53 89 
Sum = 142*/