/* Write a C++ program to create a static member function that accesses and displays the value of a
static data member. */

#include <iostream>
using namespace std;

class Demo
{
    private: 
    static int value;

    public:
    static void display()
    {
        cout << "Value = " << value << endl;

    }

    void setValue (int v)
    {
        value = v;

    }
};

int Demo::value=0;

int main ()
{
    Demo obj;
    obj.setValue(100);

    //Calling static function
    Demo::display();

    return 0;

}

/*OUTPUT
Value = 100*/