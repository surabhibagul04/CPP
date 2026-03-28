#include <iostream>
using namespace std;

class Student
{
public:
    int age;

    // Constructor
    Student()
    {
        age = 20;
        cout << "Constructor called" << endl;
    }

    // Normal Function
    void display()
    {
        cout << "Age is: " << age << endl;
    }
};

int main()
{
    Student s1;   // Constructor called automatically
    s1.display(); // Function called manually
}