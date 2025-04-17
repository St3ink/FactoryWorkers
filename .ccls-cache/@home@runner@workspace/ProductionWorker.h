#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

// Derived class representing a production worker from the Employee base class
class ProductionWorker : public Employee {
protected:
    int shift;
    double hourlyPayRate;

public:
    // Default constructor
    ProductionWorker() : Employee(), shift(1), hourlyPayRate(0.0) {}

    // Parameterized constructor with initializer list
    ProductionWorker(string n, string empNum, string hDate, int s, double pay)
        : Employee(n, empNum, hDate), shift(s), hourlyPayRate(pay) {}

    // Setters
    void setShift(int s) { shift = s; }
    void setHourlyPayRate(double pay) { hourlyPayRate = pay; }

    // Getters
    int getShift() const { return shift; }
    double getHourlyPayRate() const { return hourlyPayRate; }

    // Print production worker info including inherited data
    void printProductionWorker() const {
        printEmployee();
        cout << "Shift: " << (shift == 1 ? "Day" : "Night") << "\n"
             << "Hourly Pay Rate: $" << hourlyPayRate << endl;
    }
};

#endif // PRODUCTIONWORKER_H