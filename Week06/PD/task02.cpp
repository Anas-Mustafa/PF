#include <iostream>
using namespace std;

string calculateGrade(float percentage);

int main() {
    string name;
    int englishMarks, mathMarks, chemistryMarks, socialMarks, biologyMarks;
    float TOTAL_MARKS = 500;

    cout << "Name: ";
    cin >> name;
    cout << "English Marks (out of 100): ";
    cin >> englishMarks;
    cout << "Math Marks (out of 100): ";
    cin >> mathMarks;
    cout << "Chemistry Marks (out of 100): ";
    cin >> chemistryMarks;
    cout << "Social Science Marks (out of 100): ";
    cin >> socialMarks;
    cout << "Biology Marks (out of 100): ";
    cin >> biologyMarks;

    int obtainedMarks = englishMarks + mathMarks + chemistryMarks + socialMarks + biologyMarks;
    float obtainedPercentage = obtainedMarks / TOTAL_MARKS * 100;
    string obtainedGrade = calculateGrade(obtainedPercentage);

    cout << "Name \t Marks \t Percentage \t Grade" << endl;
    cout << name << "\t" << obtainedMarks << "\t" << obtainedPercentage << "%\t\t" << obtainedGrade << endl;

    return 0;
}

string calculateGrade(float percentage) {
    string grade;
    if (percentage > 100)
        grade = "F";
    else if (percentage > 89)
        grade = "A+";
    else if (percentage > 79)
        grade = "A";
    else if (percentage > 69)
        grade = "B+";
    else if (percentage > 59)
        grade = "B";
    else if (percentage > 49)
        grade = "C";
    else if (percentage > 39)
        grade = "D";
    else
        grade = "F";

    return grade;
}