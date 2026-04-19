/* Write a C++ program to demonstrate the use of a parameterized constructor in the Patient class to
initialize patient details using values provided at the time of object creation. */

#include<iostream>
using namespace std;

class Patient 
{
    private: 
    string name;
    int age;

    public:
    //Parameterized constructor
    Patient (string n, int a) {
        name= n;
        age= a;
    }

    void display()
    {
        cout << "Patient Detaiks: " << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

    }
};

int main ()
{
    Patient p("Surabhi", 25);
    p.display();

    return 0;
}

/*OUTPUT
Patient Detaiks: 
Name: Surabhi
Age: 25
*/