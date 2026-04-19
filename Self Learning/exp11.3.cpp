/* 3. Write a C++ program to create a derived class that implements the pure virtual function defined in the base class.*/

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
};

class Manager : public Department
{
public:
    float salary;

    void getData()
    {
        cout << "Enter ID, Name, Department, Salary: ";
        cin >> empId >> name >> deptName >> salary;
    }

    void display()
    {
        cout << "ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << deptName << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Manager m;
    m.getData();
    m.display();

    return 0;
}

/* 
output

Enter ID, Name, Department, Salary: 1383 surabhi cse 50000
ID: 1383
Name: surabhi
Department: cse
Salary: 50000
*/