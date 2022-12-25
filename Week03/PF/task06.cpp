#include <iostream>
using namespace std;

int main() {
    string firstName;
    string lastName;
    int matricMarks;
    int interMarks;
    int ecatMarks;
    float matricTotalMarks = 1100;
    float interTotalMarks = 550;
    float ecatTotalMarks = 400;
    int matricWeightage = 10;
    int interWeightage = 40;
    int ecatWeightage = 50;

    cout << "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Matric Marks (Out of " << matricTotalMarks << "): ";
    cin >> matricMarks;
    cout << "Inter Marks (Out of " << interTotalMarks << "): ";
    cin >> interMarks;
    cout << "Ecat Marks (Out of " << ecatTotalMarks << "): ";
    cin >> ecatMarks;

    float matricPercentage = matricMarks / matricTotalMarks * 100;
    float interPercentage = interMarks / interTotalMarks * 100;
    float ecatPercentage = ecatMarks / ecatTotalMarks * 100;

    float obtainedMatricWeightage = matricPercentage * matricWeightage / 100;
    float obtainedInterWeightage = interPercentage * interWeightage / 100;
    float obtainedEcatWeightage = ecatPercentage * ecatWeightage / 100;

    float totalAggregate = obtainedEcatWeightage + obtainedInterWeightage + obtainedMatricWeightage;

    cout << firstName << " " << lastName << "'s Aggregate: " << totalAggregate;

    return 0;
}