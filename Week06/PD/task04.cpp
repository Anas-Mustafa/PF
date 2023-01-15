#include <iostream>
using namespace std;

float calculateCharges(char serviceCode, char time, int minutes);

int main() {
    char serviceCode, time;
    int minutes;

    cout << "Enter Service Code( 'R' for Residential | 'P' for Premium ): ";
    cin >> serviceCode;
    cout << "Enter Time( 'D' for Day | 'N' for Night ): ";
    cin >> time;
    cout << "Enter Number of Minutes Service Used: ";
    cin >> minutes;

    float charges = calculateCharges(serviceCode, time, minutes);
    if (charges == -1) {
        cout << "Invalid Service Code" << endl;
        return 1;
    }
    cout << "The charges are: " << charges << "$" << endl;

    return 0;
}

float calculateCharges(char serviceCode, char time, int minutes) {
    int additionalRate = 0;
    int initialCharges;
    if (serviceCode == 'R') {
        initialCharges = 10;
        if (minutes > 50)
            additionalRate = 0.20;
    } else if (serviceCode == 'P') {
        initialCharges = 25;
        if (time == 'D') {
            if (minutes > 75)
                additionalRate = 0.10;
        } else {
            if (minutes > 100)
                additionalRate = 0.05;
        }
    } else {
        return -1;
    }

    float additionalCharges = minutes * additionalRate;
    return initialCharges + additionalCharges;
}
