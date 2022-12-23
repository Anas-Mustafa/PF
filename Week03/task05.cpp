#include <iostream>
using namespace std;

int main() {
    int weightToLoose;
    int daysToLooseOneKg = 15;

    cout << "Enter Weight you want to loose: ";
    cin >> weightToLoose;

    int totalDays = weightToLoose * daysToLooseOneKg;
    cout << "It will take you " << totalDays << " to loose " << weightToLoose << " KGs" << endl;

    return 0;
}
    
