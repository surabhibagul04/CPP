/*Write separate C++ program with function template <typename T> ‘add(T a, T b)‘.
 Test with ‘int‘ and ‘float‘. Add exception handling if sum exceeds 100.*/



#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    T sum = a + b;
    if (sum> 100){
        throw "Sum exceeds 100";
    }
    return sum;
}

int main () {
    try {
        cout<<"Addition(int): "<<add(7, 45)<<endl;
        cout<<"Addition(float): "<<add (45.67, 75.782)<<endl;
    }
    catch (const char*msg){
        cout<<"Exception: "<<msg <<endl;
    }

    return 0;
}

/*Addition(int): 52
Exception: Sum exceeds 100!*/