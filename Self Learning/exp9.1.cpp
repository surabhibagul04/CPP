/* 1. Write a C++ program to create a base class named Person that stores basic details such as name and age */

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person p;
    p.getPerson();
    p.displayPerson();

    return 0;
}

/*output
Enter name and age: Surabhi 18
Name: Surabhi
Age: 18*/