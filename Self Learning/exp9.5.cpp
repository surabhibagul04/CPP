/* 5. Write a C++ program to demonstrate how inheritance helps in code reuse by avoiding duplication of common data members and functions. */

#include <iostream>
using namespace std;

// Base class
class Person
{
public:
    string name;
    int age;

    void getData()
    {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person
{
public:
    int rollNo;

    void getStudent()
    {
        getData();  // reused from base class
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudent()
    {
        displayData();  // reused from base class
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s;
    s.getStudent();
    s.displayStudent();

    return 0;
}

/* output
Enter name and age: Surabhi 18
Enter roll number: 10
Name: Surabhi
Age: 18
Roll No: 10 */