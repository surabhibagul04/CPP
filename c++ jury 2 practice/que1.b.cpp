/*Write separate C++ program with function template <typename T> ‘multiply(T a, T b)‘.
 Test with ‘int‘ and ‘float‘. Add exception handling if any value is negative.*/

 #include <iostream>
 using namespace std;

 template <typename T>
 T multiply (T a, T b){
    if(a<0 || b<0) {
        throw"Negative value not allowed";
    }
    return a * b;
 }

 int main () {
    try {
        cout <<"Multiplication (int): "<<multiply(5,3)<<endl;
        cout<<"Multiplication (float): "<<multiply (6.4, 67.3)<<endl;
    }
    catch (const char*msg){
        cout<<"Eception: "<< msg << endl;
    }

    return 0;
 }

 /*Multiplication (int): 15
Multiplication (float): 430.72*/