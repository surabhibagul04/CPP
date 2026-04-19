/* Write a C++ program to create a class that contains a static data member and demonstrate that the
value of this variable is shared among all objects of the class. */

#include <iostream>
using namespace std;

class Demo
{
    public: 
    static int count;

    //constructor

    Demo()
    {
        count++;
    }

    void display()
    {
        cout << "Count = " << count << endl;
    }
};

//Defination of static member
int Demo::count = 0;

int main ()
{
    Demo obj1;
    obj1.display();

    Demo obj2;
    obj2.display();

    Demo obj3;
    obj3.display();

    return 0;
}
/*OUTPUT
Count = 1
Count = 2
Count = 3
*/