/* 4. Write a C++ program to demonstrate hierarchical inheritance by creating multiple derived classes (such as Manager and Engineer) that inherit from the same base class Employee. */

#include <iostream>
using namespace std;

class Employee
{
public:
    int empId;
    string name;
};

class Manager : public Employee
{
public:
    float salary;

    void getManager()
    {
        cout << "Enter ID, Name, Salary: ";
        cin >> empId >> name >> salary;
    }

    void displayManager()
    {
        cout << "Manager ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Engineer : public Employee
{
public:
    string field;

    void getEngineer()
    {
        cout << "Enter ID, Name, Field: ";
        cin >> empId >> name >> field;
    }

    void displayEngineer()
    {
        cout << "Engineer ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Field: " << field << endl;
    }
};

int main()
{
    Manager m;
    Engineer e;

    m.getManager();
    m.displayManager();

    e.getEngineer();
    e.displayEngineer();

    return 0;
}

/*output
Enter ID, Name, Salary: 1383 surabhi 30000 
Manager ID: 1383
Name: surabhi
Salary: 30000
Enter ID, Name, Field: 1383 surabhi cse
Engineer ID: 1383
Name: surabhi
Field: cse */