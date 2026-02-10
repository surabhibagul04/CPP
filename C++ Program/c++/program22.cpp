#include<iostream>
using namespace std;

class Test {
    static int count; //Static data member (Declaration)
    public:
    Test () {count ++;}// Increaments count whenever an object is created
    static void showCount() { //Static member function 
        cout<<"Total Objects:"<<count <<endl;
    }
};

//Defination of static data member (outside the class)
int Test:: count= 0;

int main () {
    Test t1, t2, t3; //creating objects
    Test::showCount(); //Calling static function without an object
    return 0;
    
}
