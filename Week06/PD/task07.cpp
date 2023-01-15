#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int startingHour, startingMinute, arrivalHour, arrivalMinute;

    cout << "Starting Time Hour: ";
    cin >> startingHour;
    cout << "Starting Time Minute: ";
    cin >> startingMinute;
    cout << "Arrival Time Hour: ";
    cin >> arrivalHour;
    cout << "Arrival Time Minute: ";
    cin >> arrivalMinute;

    int startingTime = startingHour * 60 + startingMinute;
    int arrivalTime = arrivalHour * 60 + arrivalMinute;
    int timeDifference = abs(arrivalTime - startingTime);

    if (arrivalTime <= startingTime) {
        if (timeDifference <= 30) {
            cout << "On time" << endl;
        } else {
            cout << "Early" << endl;
        }
        if (timeDifference < 60) {
            cout << timeDifference << " minutes";
        } else {
            cout << timeDifference / 60 << ":" << timeDifference % 60 << " hours";
        }
        cout << " before the start" << endl;
    } else {
        cout << "Late" << endl;
        if (timeDifference < 60) {
            cout << timeDifference << " minutes";
        } else {
            cout << timeDifference / 60 << ":" << timeDifference % 60 << " hours";
        }
        cout << " after the start" << endl;
    }

    return 0;
}