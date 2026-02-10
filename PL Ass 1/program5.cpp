// Write a C++ program to display 10 students' records using class and object.
#include<iostream>
using namespace std;

class Student {
    int roll;
    string name;
    public: 
    void input() {
        cin>> roll>> name;
    }
    void display() {
        cout<< roll << "  "<< name<< endl;

    }
};

int main () {
    Student s[10];
    cout<< "Enter roll and name:\n";
    for(int i = 0; i < 10; i++)
    s[i]. input();

    cout << "\nStudent Records: \n";
    for(int i= 0; i<10; i++)
    s[i].display();
}