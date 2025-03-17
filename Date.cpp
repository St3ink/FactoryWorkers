#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

bool Date::isValidMonth(int m) const {
    return m >= 1 && m <= 12;
}

bool Date::isValidDay(int m, int d, int y) const {
    if (d < 1) return false;
    return d <= lastDay(m, y);
}

bool Date::isValidYear(int y) const {
    return y > 0;
}

bool Date::isValidDate(int m, int d, int y) {
    return isValidMonth(m) && isValidDay(m, d, y) && isValidYear(y);
}

Date::Date(int m, int d, int y) {
    setDate(m, d, y);
}

void Date::setDate(int m, int d, int y) {
    if (isValidDate(m, d, y)) {
        month = m;
        day = d;
        year = y;
    } else {
        month = 1;
        day = 1;
        year = 1900;
    }
}

int Date::getMonth() const { return month; }
int Date::getDay() const { return day; }
int Date::getYear() const { return year; }

bool Date::isLeapYear() const {
    return isLeapYear(year);
}

bool Date::isLeapYear(int y) const {
    return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
}

int Date::lastDay() const {
    return lastDay(month, year);
}

int Date::lastDay(int m, int y) const {
    if (m == 2) return isLeapYear(y) ? 29 : 28;
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    }
        else {
            return 31;
        }
}

string Date::printNumeric() const {
    return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}

string Date::printLong() const {
    const string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    return months[month - 1] + " " + to_string(day) + ", " + to_string(year);
}

string Date::printDayFirst() const {
    const string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    return to_string(day) + " " + months[month - 1] + " " + to_string(year);
}
