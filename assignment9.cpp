#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imaginary;

    Complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }

    friend ostream& operator<<(ostream& out, const Complex& c);
    friend istream& operator>>(istream& in, Complex& c);
};

ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real << " + i" << c.imaginary;
    return out;
}

istream& operator>>(istream& in, Complex& c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imaginary;
    return in;
}

int main() {
    Complex c1;
    cin >> c1;
    cout << "The Complex object is: " << c1 << endl;
    return 0;
}
