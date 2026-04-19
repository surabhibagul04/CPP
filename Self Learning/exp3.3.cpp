/* Write a C++ program to calculate the percentage of marks for a student based on the total marks
obtained.*/

#include<iostream>
using namespace std;

class Student
{
    private: 
    int marks1, marks2, marks3, total;
    float percentage;

    public:
    void input()
    {
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
        cout <<"Total marks = " << total << endl;
        cout<<"Percentage = " <<percentage << "%"<<endl;
    }
};

int  main()
{
    Student s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}

/*OUTPUT
Enter marks of 3 subjects: 56 78 33
Total marks = 167
Percentage = 55.6667%
*/
