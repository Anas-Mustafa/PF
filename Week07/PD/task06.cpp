#include <iostream>
using namespace std;

int main() {
    int days, totalPatients;
    int treatedPatients = 0, untreatedPatients = 0;
    int totalDoctors = 7;
    cout << "Days: ";
    cin >> days;

    for (int day = 1; day <= days; day++) {
        cout << "Patients: ";
        cin >> totalPatients;

        if (day % 3 == 0) {
            if (untreatedPatients > treatedPatients) {
                totalDoctors++;
            }
        }
        if (totalPatients > totalDoctors) {
            untreatedPatients += totalPatients - totalDoctors;
            treatedPatients += totalDoctors;
        } else {
            treatedPatients += totalPatients;
        }
    }
    cout << "Treated Patients  : " << treatedPatients << endl;
    cout << "Untreated Patients: " << untreatedPatients << endl;

    return 0;
}