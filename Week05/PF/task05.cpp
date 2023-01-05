#include <iostream>
using namespace std;

int main() {
    int hours, minutes;
    int updatedHours, updatedMinutes;
    int minutesToAdd = 15;

    while(true) {
        cout << "Hours:   ";
        cin >> hours;
        cout << "Minutes: ";
        cin >> minutes;

        updatedHours = hours;
        if (minutes + minutesToAdd >= 60) {
            updatedHours = (hours + 1) % 24;
        }
        updatedMinutes = (minutes + minutesToAdd) % 60;

        cout << "Time: " << updatedHours << ":" << updatedMinutes << endl << endl;
    }

    return 0;
}