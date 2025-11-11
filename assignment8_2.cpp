#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imaginary;

    Complex() {}

    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    Complex operator +(const Complex  &c) {
        return Complex(real + c.real, imaginary + c.imaginary);
    }
};

int main() {
    Complex c1(10, 20);
    Complex c2(30, 40);
    Complex c3;

    c3 = c1 + c2;

    cout << "Complex Number: " << c3.real << " + i" << c3.imaginary << endl;

    return 0;
}
