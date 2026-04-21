/*Write a C++ program with base class ‘Vehicle‘ having virtual function ‘showSpeed()‘.
 Derive ‘Car‘ and ‘Bike‘. Override ‘showSpeed()‘. Use base class pointer to call both.*/

 #include <iostream>
 using namespace std;

class Vehicle {
    public:
    virtual void showSpeed()
    {
        cout<<"Vehicle speed"<<endl;
    }
};

class Car : public Vehicle{
public: 
void showSpeed()
{
    cout<<"Car speed: 120km/h"<<endl;
}
};

class Bike : public Vehicle{
public: 
void showSpeed()
{
    cout<<"Bike speed: 80km/h"<<endl;
}
};

int main () {
    Vehicle* ptr;
    Car c;
    Bike b;

    ptr = &c;
    ptr -> showSpeed();

    ptr = &b;
    ptr -> showSpeed();

    return 0;
}

/*Car speed: 120km/h
Bike speed: 80km/h*/

