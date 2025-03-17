#include "Date.h"
#include <iostream>
using namespace std;
int main() {
    Date date1;
    cout << "Test default constructor: " << date1.printNumeric() << "\n";

    Date date2(2, 28, 2009);
    cout << "Test constructor with valid date: " << date2.printNumeric() << "\n";

    Date date3(45, 2, 2009);
    cout << "Test constructor with invalid month (45, 2, 2009): " << date3.printNumeric() << "\n";

    Date date4(2, 29, 2009);
    cout << "Test constructor with invalid day (2/29/2009): " << date4.printNumeric() << "\n";

    date1.setDate(13, 15, 2021);
    cout << "Test setDate with bad month (13): " << date1.printNumeric() << "\n";

    date1.setDate(4, 31, 2009);
    cout << "Test setDate with bad day (4, 31, 2009): " << date1.printNumeric() << "\n";

    Date date5(2, 29, 2008);
    cout << "Test for leap year with good date (2/29/2008): " << date5.printNumeric() << "\n";

    cout << "Test the print formats:\n";
    cout << date5.printLong() << "\n";
    cout << date5.printDayFirst() << "\n";

  

    return 0;
}
