#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout << "Constructor called." << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Destructor called." << endl;
    }

    // Getters
    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }

    // Find Area
    double area() {
        return length * width;
    }

    // Find Perimeter
    double perimeter() {
        return 2 * (length + width);
    }
};

// Main function
int main() {
    Rectangle r(5.0, 3.0);

    cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}
