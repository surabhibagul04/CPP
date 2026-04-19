/*5. Write a C++ program to accept and display details of multiple students, including their marks, total,
and percentage using class and objects. */

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
        cout<<"Enter student name: ";
        cin >>name;

        cout<<"Enter marks of 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    void calculate()

    {
        total = marks1 + marks2 + marks3;
        percentage = total / 3.0;
    }

    void display()
    {
        cout<<"----------Students detail----------"<<endl;
        cout<<"Student name: "<<name <<endl;
        cout<<"Marks in 3 subjects: "<<marks1<<","<<marks2<<","<<marks3 <<endl;
        cout<<"Total marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<"%"<<endl;

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
Enter student name: Surabhi 
Enter marks of 3 subjects: 89 90 97
----------Students detail----------
Student name: Surabhi
Marks in 3 subjects: 89,90,97
Total marks: 276
Percentage: 92%
*/