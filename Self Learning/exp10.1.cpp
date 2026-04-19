/* 1. Write a C++ program to create a base class named Employee that stores basic details such as employee ID and name. */

#include <iostream>
using namespace std;

class Employee
{
public:
    int empId;
    string name;

    void getEmployee()
    {
        cout << "Enter Employee ID and Name: ";
        cin >> empId >> name;
    }

    void displayEmployee()
    {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Employee e;
    e.getEmployee();
    e.displayEmployee();

    return 0;
}

/* output
Enter Employee ID and Name: 1383 surabhi
Employee ID: 1383
Name: surabhi */