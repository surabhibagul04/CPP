/*Write a C++ program to display student details including marks of all subjects, total marks, and
calculated percentage using class and object. */

#include <iostream>
using namespace std;

class Student
{
    private:
    string name;
    int marks1, marks2, marks3, total;
    float percentage;

    public:
    void input()
    {
        cout<<"Enter name of student: ";
        cin >> name;

        cout<<"Enter marks of 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;

    }

    void calculate()
    {
        total = marks1 + marks2 + marks3;
        percentage= total / 3;

    }

    void display()
    {
        cout<<"----------Student's Detail----------"<<endl;

        cout<<"Name of student: "<<name<<endl;
        cout<<" Marks in sujects: "<< marks1 <<","<< marks2 <<","<< marks3 <<endl;
        cout<<"Total Marks: "<<total <<endl;
        cout<<"Percentage: "<<percentage <<"%"<< endl;
    }
};

int main ()
{
    Student s;
    s.input();
    s.calculate();
    s.display();

    return 0;

}

/*OUTPUT
Enter name of student: Surabhi
Enter marks of 3 subjects: 54 78 89
----------Student's Detail----------
Name of student: Surabhi
 Marks in sujects: 54,78,89
Total Marks: 221
Percentage: 73%
*/