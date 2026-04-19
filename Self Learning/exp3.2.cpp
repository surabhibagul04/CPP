/* Write a C++ program to define a member function inside the Student class that calculates the total
marks obtained by a student. */

#include<iostream>
using namespace std;

class Student
{
    private: 
    int marks1, marks2, marks3;

    public: 
    void input()
    {
        cout<<"Enter marks of 3 subjects: ";
        cin>> marks1 >> marks2 >> marks3;

    }

    int total()
    {
        return marks1 + marks2 + marks3;
    }

    void display()
    {
        cout<<"Total Marks are: "<<total() <<endl;

    }
};

int main ()
{
    Student s;

    s.input();
    s.display();

    return 0;
}

/*OUTPUT
Enter marks of 3 subjects: 45 33 78
Total Marks are: 156
*/