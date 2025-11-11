#include<iostream>
using namespace std;
template <class T>
T maxiNum(T a,T b)
{
    return (a>b)?a:b;
}
int main()
{
    int x = 10, y = 20;
    double p = 15.5, q = 12.3;
    char c1 = 'A', c2 = 'a';
    cout << "Max of " << x << " and " << y << " is: " << maxiNum(x, y) << endl;
    cout << "Max of " << p << " and " << q << " is: " << maxiNum(p, q) << endl;
    cout << "Max of " << c1 << " and " << c2 << " is: " << maxiNum(c1, c2) << endl;
    return 0;
}