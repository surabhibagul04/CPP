/* 5. Write a C++ program to demonstrate the concept of an abstract class by creating at least one pure virtual function and implementing it in derived classes.*/

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

Enter ID and Name: 1383 surabhi
Enter Department: cse 
Enter PF Amount: 45000

--- Employee Details ---
ID: 1383
Name: surabhi
Department: cse
PF Amount: 45000 
*/