#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;

    void showDetails() {
        cout<<"Name:"<<name<<",Age:"<<age<<endl;
    }
};

int main () {
    Student s1; //object creation
    s1.name= "John";
    s1.age= 20;
    s1.showDetails();
    return 0;
}