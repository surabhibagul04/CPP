/*Write a C++ program with base class 'Employee' having virtual function ‘salary()‘. 
Derive ‘Manager‘ and ‘Developer‘. Override ‘salary()‘. Use base class pointer to call both.*/

#include <iostream>
using namespace std;

class Employee
{
    public: 
    virtual void salary()
    {
        cout<<"Salary of Employee"<<endl;
    }
};

class Manager: public Employee
{
    public:
    void salary()
    {
        cout<<"Salary of Manager: 80,000rs"<<endl;

    }
};

class Developer: public Employee{
    public: 
    void salary()
    {
        cout <<"Salary of Developer: 60,000rs"<<endl;
    }
};

int main ()
{
    Employee * emp;
    Manager m;
    Developer d;

    emp = &m;
    emp -> salary();
     
    emp = &d;
    emp ->salary();

    return 0;

}

/*Salary of Manager: 80,000rs
Salary of Developer: 60,000rs*/