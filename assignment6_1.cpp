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

class StudentExam : public Student {
protected:
    float sub1, sub2, sub3, sub4, sub5;
public:
    void getExamData() {
        cout << "\nEnter marks for 5 subjects:\n";
        cout << "Subject 1: "; cin >> sub1;
        cout << "Subject 2: "; cin >> sub2;
        cout << "Subject 3: "; cin >> sub3;
        cout << "Subject 4: "; cin >> sub4;
        cout << "Subject 5: "; cin >> sub5;
    }
    void showExamData() {
        cout << "\nMarks Obtained:";
        cout << "\nSubject 1: " << sub1;
        cout << "\nSubject 2: " << sub2;
        cout << "\nSubject 3: " << sub3;
        cout << "\nSubject 4: " << sub4;
        cout << "\nSubject 5: " << sub5;
    }
};

class Result : public StudentExam {
    float total, percentage;
public:
    void calculateResult() {
        total = sub1 + sub2 + sub3 + sub4 + sub5;
        percentage = total / 5;
    }
    void displayResult() {
        showStudentData();
        showExamData();
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";
    }
};

int main() {
    Result r;
    r.getStudentData();
    r.getExamData();
    r.calculateResult();
    r.displayResult();
    return 0;
}
