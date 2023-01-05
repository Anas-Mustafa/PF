#include <iostream>
using namespace std;

string convertOnethNumber(int number);
string convertTenthNumber(int number);

int main() {
    int number;

    while(true) {
        cout << "Number: ";
        cin >> number;

        if (number <= 10) {
            string onethNumber = convertOnethNumber(number);
            cout << onethNumber << endl << endl;
        }
        if (number >= 20) {
            string onetheNumber = convertOnethNumber(number % 10);
            string tenthNumber = convertTenthNumber(number / 10);
            cout << tenthNumber << " " << onetheNumber << endl << endl;
        }
    }

    return 0;
}

string convertOnethNumber(int number) {
    string onethNumber = "";
    if (number == 1) {
        onethNumber = "one";
    }
    if (number == 2) {
        onethNumber = "two";
    }
    if (number == 3) {
        onethNumber = "three";
    }
    if (number == 4) {
        onethNumber = "four";
    }
    if (number == 5) {
        onethNumber = "five";
    }
    if (number == 6) {
        onethNumber = "six";
    }
    if (number == 7) {
        onethNumber = "seven";
    }
    if (number == 8) {
        onethNumber = "eight";
    }
    if (number == 9) {
        onethNumber = "nine";
    }
    if (number == 10) {
        onethNumber = "Ten";
    }

    return onethNumber;
}

string convertTenthNumber(int number) {
    string tenthNumber = "";
    if (number == 2) {
        tenthNumber = "Twenty";
    }
    if (number == 3) {
        tenthNumber = "Thirty";
    }
    if (number == 4) {
        tenthNumber = "Fourty";
    }
    if (number == 5) {
        tenthNumber = "Fifty";
    }
    if (number == 6) {
        tenthNumber = "Sixty";
    }
    if (number == 7) {
        tenthNumber = "Seventy";
    }
    if (number == 8) {
        tenthNumber = "Eighty";
    }
    if (number == 9) {
        tenthNumber = "Ninety";
    }

    return tenthNumber;
}