
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
        if (!validateInput(month) || month < 1 || month > 12) {
            cout << "Invalid month. Please enter a number between 1 and 12.\n";
            continue;
        }

        cout << "Enter day: ";
        if (!validateInput(day) || day < 1) {
            cout << "Invalid day. Please enter a positive number.\n";
            continue;
        }

        cout << "Enter year: ";
        if (!validateInput(year) || year < 1) {
            cout << "Invalid year. Please enter a positive number.\n";
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
