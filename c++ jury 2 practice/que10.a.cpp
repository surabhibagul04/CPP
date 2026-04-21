/*Write a C++ program with base class ‘Shape3D‘ having virtual function ‘volume()‘. 
Derive ‘Cube‘ and ‘Sphere‘. Override ‘volume()‘. Use base class pointer to call both.*/

#include <iostream>
using namespace std;

class Shape3D {
    public:
    virtual void volume() {
        cout << "Volume of 3D shape";
    }
};

class Cube : public Shape3D {
    public: 
    void volume () {
        cout << "Volume of cube= a* a* a" << endl;
        }
};

class Sphere: public Shape3D {
    public:
    void volume () {
        cout << "Volume of sphere: (4/3)*3.14*r*r*r" <<endl;
    }
};

int main () {
    Shape3D *ptr;
    Cube c;
    Sphere s;

    ptr = &c;
    ptr -> volume();
    ptr = &s;
    ptr -> volume();

    return 0;

    
}