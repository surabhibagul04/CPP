/*5. Write a C++ program to display complete details including employee information, department details, and PF (Provident Fund) information using appropriate inheritance structures. */

#include <iostream>
using namespace std;

class Employee
{
public:
    int empId;
    string name;

    void getEmployee()
    {
        cout << "Enter ID and Name: ";
        cin >> empId >> name;
    }
};

class Department : public Employee
{
public:
    string deptName;

    void getDepartment()
    {
        cout << "Enter Department: ";
        cin >> deptName;
    }
};

class PF : public Department
{
public:
    float pfAmount;

    void getPF()
    {
        cout << "Enter PF Amount: ";
        cin >> pfAmount;
    }

    void display()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << deptName << endl;
        cout << "PF Amount: " << pfAmount << endl;
    }
};

int main()
{
    PF obj;

    obj.getEmployee();
    obj.getDepartment();
    obj.getPF();

    obj.display();

    return 0;
}

/*output
Enter ID and Name: 1383 Surabhi
Enter Department: CSE
Enter PF Amount: 78000

--- Employee Details ---
ID: 1383
Name: Surabhi
Department: CSE
PF Amount: 78000
*/