/* 3. Write a C++ program to access and display base class members within the derived class. */

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
    void setData()
    {
        cout << "Enter name and age: ";
        cin >> name >> age;  // accessing base class members
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s;
    s.setData();
    s.display();

    return 0;
}
/*output
Enter name and age: Surabhi 18
Name: Surabhi
Age: 18 */