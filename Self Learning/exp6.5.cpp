/* Write a C++ program to display the total number of objects created by calling a static member
function without using any object. */

#include <iostream>
using namespace std;

class Counter
{
private:
    static int count;  // static data member

public:
    // Constructor
    Counter()
    {
        count++;
    }

    // Static member function
    static void showCount()
    {
        cout << "Total objects created = " << count << endl;
    }
};

// Initialize static member
int Counter::count = 0;

int main()
{
    Counter obj1;
    Counter obj2;
    Counter obj3;

    // Calling static function without using any object
    Counter::showCount();

    return 0;
}

/*OUTPUT
Total objects created = 3
*/