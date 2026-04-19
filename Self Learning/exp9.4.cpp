/* 4. Write a C++ program to display complete student details using inheritance, including both base class and derived class data. */

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cin >> name >> age;
    }
};

class Student : public Person
{
public:
    int rollNo;

    void getStudent()
    {
        cout << "Enter name, age and roll no: ";
        getPerson();
        cin >> rollNo;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s;
    s.getStudent();
    s.display();

    return 0;
}

/*OUTPUT
 Enter name, age and roll no: Surabhi 18 10
Name: Surabhi
Age: 18
Roll No: 10*/