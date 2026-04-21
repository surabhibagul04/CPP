/*Write a C++ program with base class ‘Appliance‘ having virtual function ‘power()‘. 
Derive ‘Fan‘ and ‘AC‘. Override ‘power()‘. Use base class pointer to call both.*/

#include <iostream>
using namespace std;

class Appliance {
    public:
    virtual void power(){
        cout<<"Power consumed by appliances: "<< endl;
    }
};

class Fan : public Appliance{
    public: 
    void power(){
        cout<<"Power consumed by fan: 300 watt" << endl;
    }
};

class AC : public Appliance {
    public:
    void power() {
        cout <<"Power consumed by AC: 400 watt" << endl;
    }
};

int main () {
    Appliance *ptr;
    Fan f;
    AC a;

    ptr = &f;
    ptr -> power();

    ptr = &a;
    ptr -> power();

    return 0;
}

/*Power consumed by fan: 300 watt
Power consumed by AC: 400 watt*/