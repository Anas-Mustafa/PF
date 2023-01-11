#include <iostream>
using namespace std;

int main() {
    int neededHours, totalDays, numberOfWorkers;
    int workingDayHours = 10;

    cout << "Hours needed to finish the Project: ";
    cin >> neededHours;
    cout << "Days that firm have: ";
    cin >> totalDays;
    cout << "Number of all workers: ";
    cin >> numberOfWorkers;

    float workingDays = totalDays - (totalDays * 0.1);
    int totalHoursWorked = numberOfWorkers * workingDays * workingDayHours;

    if (totalHoursWorked >= neededHours) {
        int hoursLeft = totalHoursWorked - neededHours;
        cout << "YES! " << hoursLeft << " hours left.";
    }

    if (totalHoursWorked < neededHours) {
        int additionalHoursNeeded = neededHours - totalHoursWorked;
        cout << "Not enought time! " << additionalHoursNeeded << " hours needed.";
    }

    return 0;
}