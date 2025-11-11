#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of shape is not defined." << endl;
    }
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle = " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() override {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main() {
    Shape* shape;

    Circle c(5);
    shape = &c;
    shape->area();

    Rectangle r(4, 6);
    shape = &r;
    shape->area();

    return 0;
}
