/*Write a C++ program to create a class named Patient that stores basic details such as patient name
and age, and accepts input from the user. */

#include<iostream>
using namespace std;

class Patient 
{
    private:
    string name;
    int age;

    public:
    void input()
    {
        cout << "Enter patient name: ";
        cin >> name;

        cout << "Enter patient age: ";
        cin >> age;
    }

    void display()
    {
    cout << "Patient Details: " << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl; 
    }
};

int main ()
{
    Patient p;

    p.input();
    p.display();

    return 0;
}

/*OUTPUT
Enter patient name: Surabhi
Enter patient age: 18
Patient Details: 
Name: Surabhi
Age: 18
*/