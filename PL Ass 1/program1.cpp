//Write a program to compute the area of a triangle and circle by area() function.
#include <iostream>
using namespace std;

float areaTriangle(float base, float height) {
    return 0.5 * base * height ;
}

float areaCircle(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    float base, height, radius;
    cout<<"Enter base and height: ";
    cin>> base>> height;
    cout<<"Area of Triangle= "<<areaTriangle(base, height);

    cout<< "Enter radius= ";
    cin>> radius;
    cout<<"Area of circle= "<< areaCircle(radius);
}
