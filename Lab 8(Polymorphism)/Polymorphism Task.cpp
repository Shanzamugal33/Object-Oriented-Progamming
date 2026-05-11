#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual double area() = 0; // pure virtual function
};

// Derived class: Rectangle
class Rectangle : public Shape {
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() override {
        return length * width;
    }
};

// Derived class: Circle
class Circle : public Shape {
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    Shape* s;  // base class pointer

    Rectangle r(5, 3);
    Circle c(4);

    s = &r;
    cout << "Rectangle Area: " << s->area() << endl;

    s = &c;
    cout << "Circle Area: " << s->area() << endl;

    return 0;
}
