/* Write a C++ program to define a friend function that accesses and displays private data members of a class. */

#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    float marks;

public:
    // Constructor
    Student(int r, float m)
    {
        rollNo = r;
        marks = m;
    }

    // Declare friend function
    friend void display(Student s);
};

// Friend function definition
void display(Student s)
{
    // Accessing private members
    cout << "Roll No = " << s.rollNo << endl;
    cout << "Marks = " << s.marks << endl;
}

int main()
{
    Student s1(1, 85.5);

    // Calling friend function
    display(s1);

    return 0;
}

/*
OUTPUT
Roll No = 1
Marks = 85.5
*/