/*Write separate C++ program with function template <typename T> ‘average(T a, T b)‘.
 Test with ‘int‘ and ‘double‘. Add exception handling if any value is negative.*/

 #include <iostream>
 using namespace std;

 template <typename T>
 T average (T a, T b ) {

    if(a < 0 || b < 0 ) {
        throw " Negative value not allowed";
    }

    return (a + b) / 2.0;

 }

 int main () {
    try {
        cout <<"Average of two numbers(int): " << average(74, 29) << endl;
        cout <<" Average of two numbers (float): " <<average( 54.3, - 78.3) << endl;
    }

    catch (const char *msg)
    {
        cout <<"Exception: " << msg << endl;
    }

    return 0;
 }

 /*Average of two numbers(int): 51
Exception:  Negative value not allowed*/