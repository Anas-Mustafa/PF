#include <iostream>
using namespace std;

void printAppropriateMessage(int timeDifference, string message);

int main() {
    int workingDaysPlaytime = 63;
    int holidaysPlaytime = 127;
    int preferredPlaytime = 30000;
    int daysPerYear = 365;
    int numberOfHolidays, timeDifference;

    cout << "Holidays: ";
    cin >> numberOfHolidays;

    int totalPlaytime = numberOfHolidays * holidaysPlaytime + (daysPerYear - numberOfHolidays) * workingDaysPlaytime;

    if (totalPlaytime > preferredPlaytime) {
        cout << "Tom will run away" << endl;
        timeDifference = totalPlaytime - preferredPlaytime;
        printAppropriateMessage(timeDifference, "more");
    }
    if (totalPlaytime <= preferredPlaytime) {
        cout << "Tom sleeps well" << endl;
        timeDifference = preferredPlaytime - totalPlaytime;
        printAppropriateMessage(timeDifference, "less");
    }

    return 0;
}

void printAppropriateMessage(int timeDifference, string message) {
    int hoursPlaytime = timeDifference / 60;
    int minutesPlaytime = timeDifference % 60;

    cout << hoursPlaytime << " Hours and " << minutesPlaytime << " minutes " << message << " for play" << endl;
}