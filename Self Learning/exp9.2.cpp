/* 2. Write a C++ program to create a derived class named Student that inherits from the Person class and includes additional details such as roll number. */

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int rollNo;

    void getStudent()
    {
        cout << "Enter name, age and roll number: ";
        cin >> name >> age >> rollNo;
    }

    void displayStudent()
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
    s.displayStudent();

    return 0;
}

/*output
Enter name and age: Surabhi 18
Name: Surabhi
Age: 18 */