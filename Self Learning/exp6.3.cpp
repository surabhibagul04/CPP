/* Write a C++ program to access and display the value of a static data member using class objects. */

#include<iostream>
using namespace std;

class Demo
{
    public: 
    static int value;

    void display()
    {
        cout << "Value= " <<value << endl;

    }

};

int Demo::value=50;

int main()
{
    Demo obj1, obj2;

    obj1.display();
    obj2.display();

    return 0;

}

/*OUTPUT
Value= 50
Value= 50 
*/