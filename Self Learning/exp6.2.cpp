/* Write a C++ program to create multiple objects of a class and use a static variable to count the total
number of objects created. */

#include <iostream>
using namespace std;

class Counter
{
    private: 
    static int count;

    public: 
    Counter()
    {
        count++;
        cout << "Object created. Total objects = " << count << endl;

     }
};

int Counter::count = 0;

int main ()
{
    Counter obj1;
    Counter obj2;
    Counter obj3;

    return 0;
}

/*OUTPUT

Object created. Total objects = 1
Object created. Total objects = 2
Object created. Total objects = 3
*/