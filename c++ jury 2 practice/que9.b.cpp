/*Write separate C++ program with function template <typename T> ‘divide(T a, T b)‘.
 Test with ‘int‘ and ‘float‘. Add exception handling if b is zero.*/

 #include <iostream>
 using namespace std;

 template <typename T>
 T divide(T a , T b) {
    if (b == 0) {
        throw " Can't divide by zero";
    }
    return a / b;

 }

 int main () {
    try {
        cout <<"Division (int): " << divide(65,5) << endl;
        cout << "Division (float): " << divide ( 63.6, 87.0) << endl;
    }

    catch (const char *msg) {
        cout <<"Exception: " << msg << endl;
    }
    return 0;
 }

 /*Division (int): 13
Division (float): 0.731034*/