#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int id;
};

int main(){
    Employee e1; //Object creation 
    e1.name= "Alice";
    e1.id= 101;
    
    cout<<"Emplyee Name: "<<e1.name<<",ID:"<<e1.id<<endl;
    return 0;
}