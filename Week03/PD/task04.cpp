#include <iostream>
using namespace std;

int main() {
    string name;
    int subjectOneMarks;
    int subjectTwoMarks;
    int subjectThreeMarks;
    int subjectFourMarks;
    int subjectFiveMarks;
    float totalMarks = 500;

    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Enter subject 01 marks: ";
    cin >> subjectOneMarks;
    cout << "Enter subject 02 marks: ";
    cin >> subjectTwoMarks;
    cout << "Enter subject 03 marks: ";
    cin >> subjectThreeMarks;
    cout << "Enter subject 04 marks: ";
    cin >> subjectFourMarks;
    cout << "Enter subject 05 marks: ";
    cin >> subjectFiveMarks;

    int obtainedMarks = subjectOneMarks + subjectTwoMarks + subjectThreeMarks + subjectFourMarks + subjectFiveMarks;
    float percentage = (obtainedMarks / totalMarks) * 100;
    cout << "Your percentage: " << percentage << endl;

    return 0;
}

