#include <iostream>
using namespace std;

int calculatePlayingDays(string yearType, int extraHolidays, int travellingWeekends);

int main() {
    string yearType;
    int extraHolidays, travellingWeekends;

    cout << "Year(leap | normal): ";
    cin >> yearType;
    cout << "Number of Extra Holidays: ";
    cin >> extraHolidays;
    cout << "Number of Travelling Weekends: ";
    cin >> travellingWeekends;

    int playingDays = calculatePlayingDays(yearType, extraHolidays, travellingWeekends);
    cout << "Number of Days Vladimir Play Volleyball: " << playingDays << endl;

    return 0;
}

int calculatePlayingDays(string yearType, int extraHolidays, int travellingWeekends) {
    int totalWeekends = 48;
    int weekendsInSofia = totalWeekends - travellingWeekends;
    int totalSaturdaysPlayed = weekendsInSofia * 3 / 4.0;
    int totalHolidaysPlayed = extraHolidays * 2 / 3.0;
    int totalDaysPlayed = totalSaturdaysPlayed + totalHolidaysPlayed + travellingWeekends;

    if (yearType == "leap") {
        totalDaysPlayed += 0.15 * totalDaysPlayed;
    }

    return totalDaysPlayed;
}
