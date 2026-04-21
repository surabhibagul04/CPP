/*Write a C++ program with base class ‘Animal‘ having virtual function ‘sound()‘.
 Derive ‘Dog‘ and ‘Cat‘. Override ‘sound()‘. Use base class pointer to call both.*/

#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animals makes sound"<<endl;
    }
};

class Dog : public Animal{
    public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};

class Cat : public Animal{
    public:
    void sound(){
        cout<<"Cat meows"<<endl;
    }
};

int main () {
    Animal*ptr;
    Dog d;
    Cat c;

    ptr = &d;
    ptr -> sound();

    ptr = &c;
    ptr -> sound();

    return 0;


}

/*Dog barks
Cat meows*/

