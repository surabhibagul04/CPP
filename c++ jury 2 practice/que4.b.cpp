/*Write separate C++ program with function template <typename T> ‘modulus(T a, T b)‘.
 Test with ‘int‘. Add exception handling if b is zero.*/

#include <iostream>
using namespace std;

template <typename T>
T modulus(T a, T b) {
    if (b == 0) {
        throw runtime_error("Cannot divide by zero");
    }
    return a % b;
}

int main() {
    try {
        cout << "Modulus of two numbers: " << modulus(4, 2) << endl;
    }
    catch (const exception &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}