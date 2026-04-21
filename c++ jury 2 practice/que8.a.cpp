/*Write a C++ program with base class ‘Food‘ having virtual function ‘type()‘. 
Derive ‘Veg‘ and ‘NonVeg‘. Override ‘type()‘. Use base class pointer to call both.*/

#include <iostream>
using namespace std;

class Food {
    public:
    virtual void type() {
        cout <<"Food items: ";
    }
};

class Veg : public Food {
    public: 
    void type() {
        cout <<"Food items in veg: Paneer" << endl;
    }
};

class NonVeg : public Food {
    public: 
    void type() {
        cout <<"Food items in nonveg: Sea food" << endl;
    }
};

int main () {
    Food *ptr;
    Veg v;
    NonVeg n;

    ptr = &v;
    ptr -> type();

    ptr = &n;
    ptr -> type();

    return 0;


}

/*Food items in veg: Paneer
Food items in nonveg: Sea food*/
