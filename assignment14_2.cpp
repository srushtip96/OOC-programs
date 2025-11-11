#include<iostream>
#include<vector>
#include<list>
#include<map>
using namespace std;
int main()
{
    vector<int> v;
    // Insert elements
     v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "Vector elements: ";
    for (int x : v)
        cout << x << " ";
    cout << "\nElement at index 1: " << v[1] << endl;

    // Remove last element
    v.pop_back();

    cout << "Vector after pop_back(): ";
    for (int x : v)
        cout << x << " ";
    cout << endl;
    list<int> l;

    // Insert elements
    l.push_back(100);
    l.push_front(50);
    l.push_back(150);

    cout << "\nList elements: ";
    for (int x : l)
        cout << x << " ";

    // Remove element
    l.pop_front();
    cout << "\nList after pop_front(): ";
    for (int x : l)
        cout << x << " ";
    cout << endl;
    map<int, string> m;

    // Inserting key-value pairs
    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Cherry";

    cout << "\nMap elements (key => value):\n";
    for (auto p : m)
        cout << p.first << " => " << p.second << endl;

    // Access using key
    cout << "Value with key 2: " << m[2] << endl;

    // Erase an element
    m.erase(3);
    cout << "Map after erasing key 3:\n";
    for (auto p : m)
        cout << p.first << " => " << p.second << endl;
    return 0;
}