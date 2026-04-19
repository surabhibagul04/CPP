/* 3. Write a C++ program to demonstrate multilevel inheritance by creating another class (such as Manager) that inherits from the Department class and includes additional details.*/

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

/*output
Enter ID, Name, Department, Salary: 1383 surabhi cse 30000
ID: 1383
Name: surabhi
Department: cse
Salary: 30000 */