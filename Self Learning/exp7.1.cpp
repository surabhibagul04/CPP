/* 1. Write a C++ program to create a class with private data members and attempt to access them
outside the class. */
#include <iostream>
using namespace std;

class Student
{
private:
    int marks;  // private data member

public:
    void setMarks(int m)
    {
        marks = m;
    }

    void display()
    {
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s1;


    s1.setMarks(90);
    s1.display();

    return 0;
}

/* 
OUTPUT
Marks = 90
*/