#include <iostream>
using namespace std;

class Number {
private:
    int x;
public:
    void getData() {
        cout << "Enter value: ";
        cin >> x;
    }

    void display() {
        cout << "x = " << x << endl;
    }

 
    void operator --() {
       --x;
    }
};

int main() {
    Number n;

    n.getData();
    cout << "\nBefore Overloading:\n";
    n.display();

    --n; 

    cout << "\nAfter Overloading (-n):\n";
    n.display();

    return 0;
}
