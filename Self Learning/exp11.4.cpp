/*4. Write a C++ program to call the implemented function using a base class pointer to demonstrate runtime behavior. */

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

/* output

Enter ID, Name, Salary: 1383 Surabhi 50000
Manager ID: 1383
Name: Surabhi
Salary: 50000
Enter ID, Name, Field: 1303 surabhi engigneer
Engineer ID: 1303
Name: surabhi
Field: engigneer 

*/