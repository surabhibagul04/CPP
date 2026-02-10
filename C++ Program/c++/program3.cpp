#include<iostream>
using namespace std;

int main () {

    int a,b,c ;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;

    c= b;
    b= a;
    a= c;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

}

/*to compile the program we need to write
g++ filename.cpp -p file name
./filename
*/ 
