
#include "Date.h"
#include <iostream>
using namespace std;

bool validateInput(int& value) {
    if (!(cin >> value)) {
        cin.clear();
        cin.ignore(10000, '\n');
        return false;
    }
    return true;
}

int main() {
    int month, day, year;
    
    do {
        cout << "Enter month (1-12): ";
        Date validator;
        if (!validateInput(month) || !validator.isValidMonth(month)) {
            cout << "Invalid month. Please enter a number between 1 and 12.\n";
            continue;
        }

        cout << "Enter day: ";
        if (!validateInput(day)) {
            cout << "Invalid day input.\n";
            continue;
        }

        cout << "Enter year: ";
        if (!validateInput(year) || !validator.isValidYear(year)) {
            cout << "Invalid year. Please enter a positive number.\n";
            continue;
        }

        if (!validator.isValidDay(month, day, year)) {
            cout << "Invalid day for the given month and year.\n";
            continue;
        }

        Date userDate(month, day, year);
        if (userDate.getMonth() == month && userDate.getDay() == day && userDate.getYear() == year) {
            cout << "\nValid date entered!\n";
            cout << "Numeric format: " << userDate.printNumeric() << "\n";
            cout << "Long format: " << userDate.printLong() << "\n";
            cout << "Day-first format: " << userDate.printDayFirst() << "\n";
            break;
        } else {
            cout << "Invalid date. Please try again.\n\n";
        }
    } while (true);

    return 0;
}
