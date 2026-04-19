/*Write a C++ program to extend the Patient class by adding billing amount and appointment date,
and display all patient details using appropriate member functions. */

#include<iostream>
using namespace std;

class Patient
{
    private: 
    string name;
    int age;
    float billAmount;
    string appointmentDate;

    public:
    void input() 
    {
        cout<<"Enter patient name: ";
        cin >> name;

        cout<<"Enter patient age: ";
        cin >> age;

        cout<<"Enter billing amount: ";
        cin >> billAmount;

        cout<<"Enter appointment date: ";
        cin>> appointmentDate;
    }

    void display() 
    {
        cout<<"-----Patient Details-----"<<endl;
        cout<<"Name: " <<name<< endl;
        cout<<"Age: " <<age<< endl;
        cout<<"Bill Amount: " <<billAmount<< endl;
        cout<<"Appointment Date: " << appointmentDate<< endl;
    }
};

int main ()
{
    Patient p;

    p.input();
    p.display();

    return 0;
}

/* OUTPUT
Enter patient name: Surabhi
Enter patient age: 18
Enter billing amount: 56789
Enter appointment date: 19/04/2026
-----Patient Details-----
Name: Surabhi
Age: 18
Bill Amount: 56789
Appointment Date: 19/04/2026*/