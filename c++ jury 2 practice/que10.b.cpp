/*Write separate C++ program with function template <typename T> ‘power(T a, T b)‘.
 Test with ‘int‘ and ‘double‘. Add exception handling if exponent is negative.*/

 #include <iostream>
 using namespace std;

 template <typename T>
 T power (T a, T b) {
    if ( b < 0) {
        throw "Exponent cannot be negative";
    }
    T result = 1;

    for ( int i = 0; i < b; i++) {
        result = result * a;
    }

    return result;
 }

 int main () {
    try {
        cout <<"Power of two numbers (int): "<<power(4,3) << endl;
    cout <<"Power of two numbers (float): " <<power(6.1, 3.1) << endl;  
 }
 catch ( const char *msg) {
    cout <<"Exception: "<< msg << endl;
 }
 return 0;
 }

 /*Power of two numbers (int): 64
Power of two numbers (float): 1384.58*/