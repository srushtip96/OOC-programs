#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val){
	value=val;
    }

    bool operator==(const MyClass& other) const {
        return value == other.value;
    }

    bool operator!=(const MyClass& other) const {
        return value != other.value;
    }

    bool operator<(const MyClass& other) const {
        return value < other.value;
    }

    bool operator>(const MyClass& other) const {
        return value > other.value;
    }

    bool operator<=(const MyClass& other) const {
        return value <= other.value;
    }

    bool operator>=(const MyClass& other) const {
        return value >= other.value;
    }
};

int main() {
    int val1, val2;
    cout << "Enter first value: ";
    cin >> val1;
    cout << "Enter second value: ";
    cin >> val2;

    MyClass a(val1), b(val2);

    if (a == b)
        cout << "Both objects are equal." << endl;
    else
        cout << "Objects are not equal." << endl;

    if (a != b)
        cout << "Objects are different." << endl;
    else
        cout << "Objects are the same." << endl;

    if (a < b)
        cout << "First object is less than second." << endl;
    else if (a > b)
        cout << "First object is greater than second." << endl;
    else
        cout << "Both objects are equal." << endl;

    if (a <= b)
        cout << "First object is less than or equal to second." << endl;
    else
        cout << "First object is not less than or equal to second." << endl;

    if (a >= b)
        cout << "First object is greater than or equal to second." << endl;
    else
        cout << "First object is not greater than or equal to second." << endl;

    return 0;
}
