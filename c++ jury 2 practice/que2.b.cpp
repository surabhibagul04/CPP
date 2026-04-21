/* Write separate C++ program with function template <typename T> ‘subtract(T a, T b)‘.
 Test with ‘int‘ and ‘double‘. Add exception handling if result is negative.*/

#include<iostream>
using namespace std;

template <typename T>
T subtract(T a, T b){
    T result = a - b;
    if (result < 0){
        throw "Result is negative!";
    }
    return result;
}

int main () {
    try {
        cout<<"Subtraction(int): "<<subtract (78, 45)<<endl;
        cout<<"Subtraction (float): "<<subtract (45.67, 75.782)<<endl;
    }
    catch (const char*msg){
        cout<<"Exception: "<<msg <<endl;
    }

    return 0;
}

/*Subtraction(int): 33
Exception: Result is negative!*/
