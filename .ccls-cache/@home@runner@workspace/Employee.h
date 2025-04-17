#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

// Base class representing a general employee
class Employee {
protected:
    string name;
    string employeeNumber;
    string hireDate;

public:
    // Default constructor
    Employee() : name(""), employeeNumber(""), hireDate("") {}

    // Parameterized constructor
    Employee(string n, string empNum, string hDate)
        : name(n), employeeNumber(empNum), hireDate(hDate) {}

    // Setters
    void setName(string n) { name = n; }
    void setEmployeeNumber(string empNum) { employeeNumber = empNum; }
    void setHireDate(string hDate) { hireDate = hDate; }

    // Getters
    string getName() const { return name; }
    string getEmployeeNumber() const { return employeeNumber; }
    string getHireDate() const { return hireDate; }

    // Print employee info
    void printEmployee() const {
        cout << "Name: " << name << "\n"
             << "Employee Number: " << employeeNumber << "\n"
             << "Hire Date: " << hireDate << endl;
    }
};

#endif // EMPLOYEE_H