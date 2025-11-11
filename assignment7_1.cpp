#include <iostream>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;
public:
    void getStudentData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }
    void showStudentData() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
    }
};

class Sports {
protected:
    float sportsMarks;
public:
    void getSportsData() {
        cout << "Enter Sports Marks: ";
        cin >> sportsMarks;
    }
    void showSportsData() {
        cout << "\nSports Marks: " << sportsMarks;
    }
};

class Academics {
protected:
    float academicMarks;
public:
    void getAcademicData() {
        cout << "Enter Academic Marks: ";
        cin >> academicMarks;
    }
    void showAcademicData() {
        cout << "\nAcademic Marks: " << academicMarks;
    }
};


class Result : public Sports, public Academics, public Student {
    float total, percentage;
public:
    void calculateResult() {
        total = sportsMarks + academicMarks;
        percentage = total / 2;
    }
    void displayResult() {
        showStudentData();
        showAcademicData();
        showSportsData();
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";
    }
};

int main() {
    Result r;
    cout << "--- Enter Student Details ---\n";
    r.getStudentData();
    r.getAcademicData();
    r.getSportsData();
    r.calculateResult();
    cout << "\n--- Student Result ---";
    r.displayResult();
    return 0;
}
