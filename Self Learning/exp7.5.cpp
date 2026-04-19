/* 5. Write a C++ program to demonstrate the use of a friend function by accessing and displaying
private data of a class in a proper format.*/

#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    float salary;

public:
    // Constructor
    Employee(int id, string n, float s)
    {
        empId = id;
        name = n;
        salary = s;
    }

    // Declare friend function
    friend void display(Employee e);
};

// Friend function definition
void display(Employee e)
{
    cout << "----- Employee Details -----" << endl;
    cout << "ID      : " << e.empId << endl;
    cout << "Name    : " << e.name << endl;
    cout << "Salary  : " << e.salary << endl;
}

int main()
{
    Employee e1(101, "Rahul", 25000.50);

    // Calling friend function
    display(e1);

    return 0;
}

/*
OUTPUT

----- Employee Details -----
ID      : 101
Name    : Rahul
Salary  : 25000.5

*/