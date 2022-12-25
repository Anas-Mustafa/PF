#include <iostream>
using namespace std;

int main() {
    string name;
    float aggregate;
    char section;
    int rollNumber;

    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your Aggregate: ";
    cin >> aggregate;
    cout << "Enter your Section: ";
    cin >> section;
    cout << "Enter your Roll Number: ";
    cin >> rollNumber;

    cout << endl << "----------------------------------------------" << endl;
    cout << "You entered Name        : " << name << endl;
    cout << "You entered Aggregate   : " << aggregate << "%" << endl;
    cout << "You entered Section     : " << section << endl;
    cout << "You entered Roll Number : " << rollNumber << endl;
    cout << "----------------------------------------------" << endl;

    return 0;
}