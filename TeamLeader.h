#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

// Derived class representing a team leader from the ProductionWorker base class
class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    // Default constructor
    TeamLeader()
        : ProductionWorker(), monthlyBonus(0.0), requiredTrainingHours(0), attendedTrainingHours(0) {}

    // Parameterized constructor with initializer list
    TeamLeader(string n, string empNum, string hDate, int s, double pay,
               double bonus, int reqHours, int attHours)
        : ProductionWorker(n, empNum, hDate, s, pay),
          monthlyBonus(bonus), requiredTrainingHours(reqHours), attendedTrainingHours(attHours) {}

    // Setters
    void setMonthlyBonus(double bonus) { monthlyBonus = bonus; }
    void setRequiredTrainingHours(int hours) { requiredTrainingHours = hours; }
    void setAttendedTrainingHours(int hours) { attendedTrainingHours = hours; }

    // Getters
    double getMonthlyBonus() const { return monthlyBonus; }
    int getRequiredTrainingHours() const { return requiredTrainingHours; }
    int getAttendedTrainingHours() const { return attendedTrainingHours; }

    // Print team leader info including inherited data
    void printTeamLeader() const {
        printProductionWorker();  // Call parent (ProductionWorker) function
        cout << "Monthly Bonus: $" << monthlyBonus << "\n"
             << "Required Training Hours: " << requiredTrainingHours << "\n"
             << "Attended Training Hours: " << attendedTrainingHours << endl;
    }
};

#endif // TEAMLEADER_H