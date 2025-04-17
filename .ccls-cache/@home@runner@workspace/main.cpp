#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

int main() {
    // Create and display two ProductionWorker objects
    ProductionWorker worker1("Andrew", "1001", "2020-03-15", 1, 20.5);
    ProductionWorker worker2("Jackie", "1002", "2021-07-22", 2, 22.75);

    cout << "Production Worker 1:\n";
    worker1.printProductionWorker();
    cout << "\nProduction Worker 2:\n";
    worker2.printProductionWorker();

    // Create and display one ShiftSupervisor object
    ShiftSupervisor supervisor("Penny", "2001", "2019-01-10", 60000, 5000);
    cout << "\nShift Supervisor:\n";
    supervisor.printShiftSupervisor();

    // Create and display one TeamLeader object
    TeamLeader leader("Anna", "3001", "2024-11-05", 1, 25.0, 1000, 40, 35);
    cout << "\nTeam Leader:\n";
    leader.printTeamLeader();

    return 0;
}