#include <iostream>
#include <windows.h>
using namespace std;

void printMenu();
void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks);
void compareMarks(string studentOne, int studentOneScore, string studentTwo, int studentTwoScore);

int main() {
    int userChoice;
    string studentOne, studentTwo;
    int studentOneMatricMarks, studentTwoMatricMarks;
    int studentOneInterMarks, studentTwoInterMarks;
    int studentOneEcatMarks, studentTwoEcatMarks;
    string tempBuffer;

    while(true) {
        system("cls");
        printMenu();
        cout << "Enter Choice: ";
        cin >> userChoice;

        if (userChoice == 1) {
            system("cls");
            cout << "Your Choice: 1" << endl;

            cout << "Enter Student Name: ";
            cin >> studentOne;
            cout << "Enter Matric Marks (out of 1100): ";
            cin >> studentOneMatricMarks;
            cout << "Enter Inter  Marks (out of 550): ";
            cin >> studentOneInterMarks;
            cout << "Enter ecat Marks (out of 400): ";
            cin >> studentOneEcatMarks;
            cout << "Enter any key to continue...";
            cin >> tempBuffer;
        }

        if (userChoice == 2) {
            system("cls");
            cout << "Your Choice: 2" << endl;

            cout << "Enter Student Name: ";
            cin >> studentTwo;
            cout << "Enter Matric Marks (out of 1100): ";
            cin >> studentTwoMatricMarks;
            cout << "Enter Inter  Marks (out of 550): ";
            cin >> studentTwoInterMarks;
            cout << "Enter ecat Marks (out of 400): ";
            cin >> studentTwoEcatMarks;
            cout << "Enter any key to continue...";
            cin >> tempBuffer;
        }

        if (userChoice == 3) {
            system("cls");
            cout << "Your Choice: 3" << endl;
            calculateAggregate(studentOne, studentOneMatricMarks, studentOneInterMarks, studentOneEcatMarks);
            cout << "Enter any key to continue...";
            cin >> tempBuffer;
        }

        if (userChoice == 4) {
            system("cls");
            cout << "Your Choice: 4" << endl;
            calculateAggregate(studentTwo, studentTwoMatricMarks, studentTwoInterMarks, studentTwoEcatMarks);
            cout << "Enter any key to continue...";
            cin >> tempBuffer;
        }

        if (userChoice == 5) {
            system("cls");
            cout << "Your Choice: 5" << endl;
            compareMarks(studentOne, studentOneEcatMarks, studentTwo, studentTwoEcatMarks);
            cout << "Enter any key to continue...";
            cin >> tempBuffer;
        }
    }

    return 0;
}

void printMenu() {
    cout << "Press 1 to Enter Details of first  Student!" << endl;
    cout << "Press 2 to Enter Details of second Student!" << endl;
    cout << "Press 3 to calculate the aggregate of first  Student!" << endl;
    cout << "Press 4 to calculate the aggregate of second Student!" << endl;
    cout << "Press 5 to display the student with Roll Number 01!" << endl;
}

void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks) {
    float totalMatricMarks = 1100;
    float totalInterMarks = 550;
    float totalEcatMarks = 400;

    float finalAggregate = 0.3 * (matricMarks / totalMatricMarks * 100) + 0.3 * (interMarks / totalInterMarks * 100) + 0.4 * (ecatMarks / totalEcatMarks * 100);
    cout << name << "'s aggregate is: " << finalAggregate << endl;
}

void compareMarks(string studentOne, int studentOneScore, string studentTwo, int studentTwoScore) {
    string firstStudent = studentOne;

    if (studentTwoScore > studentOneScore) {
        firstStudent = studentTwo;
    }

    cout << "Roll number 01 is: " << firstStudent << endl;
}