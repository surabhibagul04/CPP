/*Write a C++ program with base class ‘Person‘ having virtual function ‘role()‘. 
Derive ‘Teacher‘ and ‘Student‘. Override ‘role()‘. Use base class pointer to call both.*/

#include <iostream>
using namespace std;

class Person {
    public:
    virtual void role() {
        cout <<"Role of person: "<<endl;
    }
};

class Teacher : public Person {
    public:
    void role () {
       cout << "Role of Teacher: Teaching" << endl; 
    }
}; 

class Student : public Person {
    public: 
    void role () {
        cout <<"Role of Student: Study" << endl;
    }
}; 

int main () {
    Person *ptr;
    Teacher t;
    Student s;

    ptr = &t;
    ptr -> role();

    ptr = &s;
    ptr -> role();

    return 0;
}

/*Role of Teacher: Teaching
Role of Student: Study*/