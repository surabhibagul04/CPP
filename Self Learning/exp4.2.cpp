/* Write a C++ program to demonstrate the use of a default constructor in the Patient class to
initialize patient details with default values. */

#include <iostream>
using namespace std;

class Patient {
    private:
    string name;
    int age;

    public:
    Patient() {
        name= "Surabhi";
        age = 18;
    }

    void display() 
    {
        cout<<"Patient detais: " <<endl;
        cout<<"Name: "<< name <<endl;
        cout << "Age: " << age <<endl;
    }
};

int main() {

    Patient p; 
    p.display();

    return 0;
}