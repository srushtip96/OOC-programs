#include <iostream>
using namespace std;


class Employee {
public:
    string name;
    int id;

    Employee(string n, int i) {
        name = n;
        id = i;
    }


    virtual void calculateSalary() {
        cout << "Salary calculation not defined for base Employee class." << endl;
    }
};

class SalariedEmployee : public Employee {
    float monthlySalary;
public:

    SalariedEmployee(string n, int i, float salary)
        : Employee(n, i) {
        monthlySalary = salary;
    }

    void calculateSalary() override {
        cout << "Salaried Employee: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Monthly Salary = " << monthlySalary << endl << endl;
    }
};


class HourlyEmployee : public Employee {
    float hourlyRate;
    int hoursWorked;
public:

    HourlyEmployee(string n, int i, float rate, int hours)
        : Employee(n, i) {
        hourlyRate = rate;
        hoursWorked = hours;
    }

    void calculateSalary() override {
        float total = hourlyRate * hoursWorked;
        cout << "Hourly Employee: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Hourly Rate = " << hourlyRate << ", Hours Worked = " << hoursWorked << endl;
        cout << "Total Salary = " << total << endl << endl;
    }
};


class CommissionedEmployee : public Employee {
    float baseSalary;
    float commissionRate;
    float sales;
public:

    CommissionedEmployee(string n, int i, float base, float rate, float sale)
        : Employee(n, i) {
        baseSalary = base;
        commissionRate = rate;
        sales = sale;
    }

    void calculateSalary() override {
        float total = baseSalary + (commissionRate * sales);
        cout << "Commissioned Employee: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Base Salary = " << baseSalary << ", Sales = " << sales
             << ", Commission Rate = " << commissionRate * 100 << "%" << endl;
        cout << "Total Salary = " << total << endl << endl;
    }
};

int main() {
 
    Employee* emp;

    
    SalariedEmployee s1("Adarsha", 101, 50000);
    emp = &s1;
    emp->calculateSalary();

    
    HourlyEmployee h1("Ravi", 102, 500, 40);
    emp = &h1;
    emp->calculateSalary();

   
    CommissionedEmployee c1("Sneha", 103, 20000, 0.10, 150000);
    emp = &c1;
    emp->calculateSalary();

    return 0;
}
