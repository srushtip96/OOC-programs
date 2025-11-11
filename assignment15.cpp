#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title, author;

    void input() {
        cout << "\nEnter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
    }

    void show() {
        cout << "\nBook ID   : " << id;
        cout << "\nBook Title: " << title;
        cout << "\nAuthor    : " << author << "\n";
    }
};

void addBook() {
    Book b;
    b.input();

    ofstream fout("library.txt", ios::app);
    fout << b.id << "|" << b.title << "|" << b.author << endl;
    fout.close();

    cout << "\n✅ Book added and stored successfully!\n";
}

void viewBooks() {
    ifstream fin("library.txt");
    if (!fin) {
        cout << "\n⚠ No Books Found!";
        return;
    }

    string line;
    cout << "\n📚 LIST OF BOOKS:\n";

    while (getline(fin, line)) {
        Book b;
        int p1 = line.find("|");
        int p2 = line.find("|", p1 + 1);

        string idStr = line.substr(0, p1);
        stringstream ss(idStr);
        ss >> b.id;

        b.title = line.substr(p1 + 1, p2 - p1 - 1);
        b.author = line.substr(p2 + 1);

        b.show();
        cout << "---------------------------------\n";
    }
    fin.close();
}

void searchBook() {
    ifstream fin("library.txt");
    if (!fin) {
        cout << "\n⚠ No Books Found!";
        return;
    }

    int searchID;
    cout << "\nEnter Book ID to Search: ";
    cin >> searchID;

    string line;
    bool found = false;

    while (getline(fin, line)) {
        Book b;
        int p1 = line.find("|");
        int p2 = line.find("|", p1 + 1);

        string idStr = line.substr(0, p1);
        stringstream ss(idStr);
        ss >> b.id;

        b.title = line.substr(p1 + 1, p2 - p1 - 1);
        b.author = line.substr(p2 + 1);

        if (b.id == searchID) {
            cout << "\n✅ Book Found:\n";
            b.show();
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\n❌ Book Not Found!";
}

void deleteBook() {
    ifstream fin("library.txt");
    if (!fin) {
        cout << "\n⚠ No Books to Delete!";
        return;
    }

    int delID;
    cout << "\nEnter Book ID to Delete: ";
    cin >> delID;

    ofstream temp("temp.txt");
    string line;
    bool deleted = false;

    while (getline(fin, line)) {
        int p = line.find("|");
        string idStr = line.substr(0, p);
        int fileID;
        stringstream ss(idStr);
        ss >> fileID;

        if (fileID != delID)
            temp << line << endl;
        else
            deleted = true;
    }

    fin.close();
    temp.close();

    remove("library.txt");
    rename("temp.txt", "library.txt");

    if (deleted)
        cout << "\n✅ Book Deleted Successfully!";
    else
        cout << "\n❌ Book ID Not Found!";
}

int main() {
    int choice;
    while (true) {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. View All Books";
        cout << "\n3. Search Book";
        cout << "\n4. Delete Book";
        cout << "\n5. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: cout << "\n👋 Thank You! Exiting...\n"; return 0;
            default: cout << "\n❌ Invalid Choice!";
        }
    }
}