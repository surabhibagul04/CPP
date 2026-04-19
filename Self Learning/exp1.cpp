/*Experiment 1: Hello World Program (Pre-Requisite Assignments)
1. Write a C++ program to display your full name on the screen in a clear and readable format.
2. Write a C++ program to display your college name, course name, and current year, each on a
separate line.
3. Write a C++ program to display a meaningful welcome message using multiple output statements
in different lines.
4. Write a C++ program to accept your name as input from the user and display the entered name on
the screen.
5. Write a C++ program to accept your name and age from the user and display a formatted message
using both values.*/

#include<iostream>
using namespace std;

int main()
{
    //Display full name 
    cout<<"Name: Surabhi Nilesh Bagul"<<endl;

    //Display college name, course name and current year
    cout<<"College Name: MIT-ADT University"<<endl;
    cout<<"Course Name: Btech (CSE)"<<endl;
    cout<<"Current Year: First Year"<<endl;

    //Display a meaningful welcome message 
    cout<<"Welcome to C++ Programming!"<<endl;
    cout<<"Let's Learn and Grow together"<<endl;

    //Accept name and age from the user 
    string name;
    int age;

    cout<<"Enter your name:";
    cin>>name;

    cout<<"Enter your age: ";
    cin>>age;

    //Display the entered details
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;

return 0;
}

/*Output
Name: Surabhi Nilesh Bagul
College Name: MIT- ADT University
Course Name: Btech (CSE)
Current Year: First Year 
Welcome to C++ Programming!
Let's Learn and Grow together
Enter your name: Surabhi
Enter your age: 18
Name: Surabhi
Age: 18
*/