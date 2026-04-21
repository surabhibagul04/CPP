/*Write separate C++ program with function template <typename T> ‘cube(T num)‘.
 Test with ‘int‘ and ‘float‘. Add exception handling if num is zero.*/

 #include <iostream>
 using namespace std;

 template <typename T>
 T cube (T a){
    if (a == 0) {
        throw "Cube is zero";

    }
    return a * a* a;
 }

 int main () {
    try {
        cout <<"Cube of a number (int): " << cube (4) << endl;
        cout <<"Cube of a number (float): " << cube (6.2) << endl; 

    }
    catch (const char *msg) {
        cout <<"Exception: "<< msg << endl;
    }

    return 0;
 }

 /*Cube of a number (int): 64
Cube of a number (float): 238.328*/
