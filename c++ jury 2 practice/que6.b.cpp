/*Write separate C++ program with function template <typename T> ‘min(T a, T b)‘. 
Test with ‘int‘ and ‘double‘. Add exception handling if both values are negative.*/

#include <iostream>
using namespace std;

template <typename T>
T minValue (T a, T b){
    if (a < 0 && b < 0) {
        throw "Both values are negative"; 
    }
    return ( a < b) ? a : b;
} 

int main ()
{
    try{
        cout <<"Minimum value (int): " << minValue(58, 47) << endl;
        cout <<"Minimum value (double): " <<minValue ( -63.89, -53.912) << endl;
    }

    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
/*Minimum value (int): 47
Exception: Both values are negative*/