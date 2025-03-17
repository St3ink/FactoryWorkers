#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
    bool isValidMonth(int m) const;
    bool isValidDay(int m, int d, int y) const;
    bool isValidYear(int y) const;
    bool isValidDate(int m, int d, int y);
    bool isLeapYear(int year) const;

public:
    Date(int m = 1, int d = 1, int y = 1900);
    void setDate(int m, int d, int y);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    bool isLeapYear() const;
    int lastDay() const;
    int lastDay(int month, int year) const;
    string printNumeric() const;
    string printLong() const;
    string printDayFirst() const;
};

#endif // DATE_H
