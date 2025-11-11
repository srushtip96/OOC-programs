
#include <iostream>

using namespace std;

class LibraryItem
{
public:
    string title;
    int id;

    void input() 
    {
        cout << "Enter Title and ID: ";
        cin >> title >> id;
    }

    void display() 
    {
        cout << "Title: " << title << ", ID: " << id << endl;
    }
};

class Book : public LibraryItem 
{
public:
    string author;
    void inputBook() 
    {
        input();
        cout << "Enter Author Name: ";
        cin >> author;
    }
    void displayBook() 
    {
        display();
        cout << "Author: " << author << endl;
    }
};

class Magazine : public LibraryItem 
{
public:
    int issueNumber;
    void inputMagazine() {
        input();
        cout << "Enter Issue Number: ";
        cin >> issueNumber;
    }
    void displayMagazine() {
        display();
        cout << "Issue No: " << issueNumber << endl;
    }
};

int main() 
{
    Book b;
    Magazine m;

    cout << "\nEnter Book Details:\n";
    b.inputBook();

    cout << "\nEnter Magazine Details:\n";
    m.inputMagazine();

    cout << "\n--- Library Items ---\n";
    b.displayBook();
    m.displayMagazine();

    return 0;
}