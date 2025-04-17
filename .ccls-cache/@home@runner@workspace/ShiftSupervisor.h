#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

// Derived class representing a shift supervisor inheriting from Employee base class
class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualBonus;

public:
    // Default constructor
    ShiftSupervisor() : Employee(), annualSalary(0.0), annualBonus(0.0) {}

    // Parameterized constructor with initializer list
    ShiftSupervisor(string n, string empNum, string hDate, double salary, double bonus)
        : Employee(n, empNum, hDate), annualSalary(salary), annualBonus(bonus) {}

    // Setters
    void setAnnualSalary(double salary) { annualSalary = salary; }
    void setAnnualBonus(double bonus) { annualBonus = bonus; }

    // Getters
    double getAnnualSalary() const { return annualSalary; }
    double getAnnualBonus() const { return annualBonus; }

    // Print shift supervisor info including inherited data
    void printShiftSupervisor() const {
        printEmployee();
        cout << "Annual Salary: $" << annualSalary << "\n"
             << "Annual Bonus: $" << annualBonus << endl;
    }
};

#endif