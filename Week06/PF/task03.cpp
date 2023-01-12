#include <iostream>
using namespace std;

string getTitle(int age, char gender);

int main() {
    int age;
    char gender;
    string name;

    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Gender(m | f): ";
    cin >> gender;

    string title = getTitle(age, gender);
    cout << "Welcome " << title << " " << name << endl;

    return 0;
}

string getTitle(int age, char gender) {
    string title;
    if (gender == 'm') {
        if (age >= 16) {
            title = "Mr.";
        } else {
            title = "Master";
        }
    } else {
        if (age >= 16) {
            title = "Ms.";
        } else {
            title = "Miss";
        }
    }

    return title;
}
