/*2. Write a C++ program to create a derived class named Department that inherits from the Employee class and includes department-related details */

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

/*output
Enter ID, Name, Department: 1383 surabhi cse
ID: 1383
Name: surabhi
Department: cse
*/