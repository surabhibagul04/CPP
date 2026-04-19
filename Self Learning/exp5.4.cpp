/* Write a C++ program to create a class and define an inline member function to perform addition of
two numbers. */

#include <iostream>
using namespace std;

class Addition 
{
    int num1, num2, result;

    public: 
     void input()
     {
        cout  <<"Enter two numbers to add: ";
        cin >> num1 >> num2;
     }

     inline int add()
     {
        return num1 + num2;
     }

     void display()
     {
        cout<<"Result: " <<num1 + num2;
     }
};

int main () 
{
    Addition a;

    a.input();
    a.add();
    a.display();

    return 0;

}

/*
OUTPUT
Enter two numbers to add: 45 78
Result: 123
*/