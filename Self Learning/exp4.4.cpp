/* Write a C++ program to define a member function in the Patient class that displays patient details
in a proper format. */

#include<iostream>
using namespace std;

class Patient {
    private:
    string name;
    int age;

    public:
        void input()
        {
            cout <<"Enter patient's name: ";
            cin >> name;

            cout << "Enter patient's age: ";
            cin >>age;
        }

        void display()
        {
            cout<<"-----Patient Details-----" << endl;
            cout << "Name: " <<name << endl;
            cout << "Age: " <<age << endl;
            cout <<"--------------------------------" <<endl;

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
Enter patient's name: Surabhi
Enter patient's age: 18
-----Patient Details-----
Name: Surabhi
Age: 18
--------------------------------
*/