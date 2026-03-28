//Inline member function

#include<iostream>
using namespace std;

class Calculator
{
    private:
    float a,b;

    public:
     void getData(float x, float y)
     {
        a=x;
        b=y;
     }

     inline float add()
     {
        return a+b;

     }

     inline float subtract()
     {
        return a-b;
     }

     inline float multiply()
     {
        return a*b;
     }

     inline float divide()
     {
        return a/b;
     }

};


int main ()
{
    Calculator calc;
    float x,y;

    cout<<"Enter two number:";
    cin>>x>>y;

    calc.getData(x,y);

    // Display Result

    cout<<"Addition: "<<calc.add()<<endl;
    cout<<"Subtraction: "<<calc.subtract()<<endl;
    cout<<"Multiplication: "<<calc.multiply()<<endl;
    cout<<"Division: "<<calc.divide()<<endl;

    return 0;

}