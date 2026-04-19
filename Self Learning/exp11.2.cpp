/*2. Write a C++ program to declare a pure virtual function inside a class */

#include <iostream>
using namespace std;

class Employee
{
public:
    int empId;
    string name;
};

class Department : public Employee
{
public:
    string deptName;

    void getData()
    {
        cout << "Enter ID, Name, Department: ";
        cin >> empId >> name >> deptName;
    }

    void display()
    {
        cout << "ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << deptName << endl;
    }
};

int main()
{
    Department d;
    d.getData();
    d.display();

    return 0;
}

/* OUTPUT

Enter ID, Name, Department: 1383 Surabhi CSE
ID: 1383
Name: Surabhi
Department: CSE
*/