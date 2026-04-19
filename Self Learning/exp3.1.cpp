/* Write a C++ program to create a class named Student that stores marks of three subjects and
accepts input from the user. */

#include <iostream>
using namespace std;

class Student
{
    private: 
    int marks1, marks2, marks3;

    public: 
    void input()
    {
        cout<<"Enter marks of 3 subjects: ";
        cin >> marks1 >>marks2 >> marks3;
    }

    void display()
    {
        cout<<"Marks of 3 subjects are: "<<marks1 <<"," <<marks2 <<"," <<marks3 <<endl;

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
Enter marks of 3 subjects: 45 67 89
Marks of 3 subjects are: 45, 67, 89
*/