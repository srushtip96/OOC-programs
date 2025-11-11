#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void getPersonData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
    void showPersonData() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};


class Student : public Person {
protected:
    int rollNo;
public:
    void getStudentData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
    void showStudentData() {
        cout << "\nRoll No: " << rollNo;
    }
};

class Teacher : public Person {
protected:
    string subject;
public:
    void getTeacherData() {
        cout << "Enter Subject: ";
        cin >> subject;
    }
    void showTeacherData() {
        cout << "\nSubject: " << subject;
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

class Result : public Student, public Sports {
    float academicMarks, total, percentage;
public:
    void getResultData() {
        cout << "Enter Academic Marks: ";
        cin >> academicMarks;
    }
    void calculate() {
        total = academicMarks + sportsMarks;
        percentage = total / 2;
    }
    void showResult() {
        showPersonData();
        showStudentData();
        showSportsData();
        cout << "\nAcademic Marks: " << academicMarks;
        cout << "\nTotal: " << total;
        cout << "\nPercentage: " << percentage << "%";
    }
};


int main() {
    Result r;
    Teacher t;

    cout << "\nEnter Student Details\n";
    r.getPersonData();
    r.getStudentData();
    r.getSportsData();
    r.getResultData();
    r.calculate();

    cout << "\nStudent Result";
    r.showResult();

    cout << "\n\nEnter Teacher Details\n";
    t.getPersonData();
    t.getTeacherData();
    cout << "\nTeacher Information";
    t.showPersonData();
    t.showTeacherData();

    return 0;
}
