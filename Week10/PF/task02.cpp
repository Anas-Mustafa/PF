#include <iostream>
using namespace std;

int checkProgress(int numberOfWeeks);

int weeks[20];

int main() {
    int numberOfWeeks;
    cout << "Enter Number Of Weeks: ";
    cin >> numberOfWeeks;

    for (int i = 0; i < numberOfWeeks; i++) {
        cout << "Miles Run on Saturday " << i + 1 << ": ";
        cin >> weeks[i];
    }

    int progressCount = checkProgress(numberOfWeeks);

    cout << "Progress Days: " << progressCount << endl;
    return 0;
}

int checkProgress(int numberOfWeeks) {
    int progressCount = 0;
    int lastDay = weeks[0];
    for (int i = 1; i < numberOfWeeks; i++) {
        if (weeks[i] > lastDay) {
            progressCount++;
        }
        lastDay = weeks[i];
    }

    return progressCount;
}