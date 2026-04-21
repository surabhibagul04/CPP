/*Write separate C++ program with function template <typename T> ‘max(T a, T b)‘.
 Test with ‘int‘ and ‘float‘. Add exception handling if both values are equal.*/

#include <iostream>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    if (a == b) {
        throw "Both values are equal";
    }

    return (a > b) ? a : b;
}

int main ()
{
    try{
        cout<<"Maximum value (int)= "<<maxValue(5,7)<<endl;
        cout<<"Maximum value (float)= "<<maxValue(6.7, 5.2)<<endl;
    }

    catch (const char* msg) {
        cout << "Exception: "<< msg << endl;
    }

    return 0;
}

/*Maximum value (int)= 7
Maximum value (float)= 6.7*/