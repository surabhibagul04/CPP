//Abstract class

#include <iostream>
#include <string>
using namespace std;


class Shape
{
public:
    
    virtual void area() = 0;
    virtual void perimeter() = 0;

    
    virtual ~Shape() {}
};


class Rectangle : public Shape
{
private:
    float length, width;

public:
    void getData()
    {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    void area() override
    {
        cout << "Area of rectangle = " << length * width << endl;
    }

    void perimeter() override
    {
        cout << "Perimeter of rectangle = " << 2 * (length + width) << endl;
    }
};


class Circle : public Shape
{
private:
    float radius;

public:
    void getData()
    {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void area() override
    {
        cout << "Area of circle = " << 3.1416 * radius * radius << endl;
    }

    void perimeter() override
    {
        cout << "Perimeter (Circumference) = " << 2 * 3.1416 * radius << endl;
    }
};


int main()
{
    Shape* s;

    Rectangle rect;
    Circle circ;

    cout << "--- Rectangle ---\n";
    rect.getData();
    s = &rect;
    s->area();
    s->perimeter();

    cout << "\n--- Circle ---\n";
    circ.getData();
    s = &circ;
    s->area();
    s->perimeter();

    return 0;
}