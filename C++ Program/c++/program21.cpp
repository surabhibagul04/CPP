#include<iostream>
using namespace std;

class Demo {
    public:
    int x;
    Demo() {cout<<"Constructor Called"<<endl;}
    ~Demo() {cout <<"Destructor Called"<<endl;}
};

int main (){
    Demo *ptr= new Demo(); //Dynamic object (Heap memory)
    ptr ->x = 10;
    cout<<"x:"<<ptr ->x<<endl;
    delete ptr; //Free memory
    return 0; 
}