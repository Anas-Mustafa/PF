#include <iostream>
using namespace std;

bool validateInput(string pinCode);
int toInt(char digit);

int main() {
    string MOVES[] = { "Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
        "Pop", "Lock", "Arabesque" };

    string pinCode;
    cout << "PIN CODE: ";
    cin >> pinCode;

    int pinLength = pinCode.length();
    if (pinLength != 4 || !validateInput(pinCode)) {
        cout << "\"" << pinCode << "\" -> " << "Invalid Input" << endl;
        return 1;
    }
    cout << "\"" << pinCode << "\" -> [";
    for (int i = 0; i < pinLength; i++) {
        int index = (toInt(pinCode[i]) + i) % 10;
        cout << MOVES[index];
        if (i != pinLength - 1) {
            cout << ", ";
        } else {
            cout << "]";
        }
    }

    return 0;
}

int toInt(char digit) {
    int number;
    if (digit == '0') {
        number = 0;
    } else if (digit == '1') {
        number = 1;
    } else if (digit == '2') {
        number = 2;
    } else if (digit == '3') {
        number = 3;
    } else if (digit == '4') {
        number = 4;
    } else if (digit == '5') {
        number = 5;
    } else if (digit == '6') {
        number = 6;
    } else if (digit == '7') {
        number = 7;
    } else if (digit == '8') {
        number = 8;
    } else if (digit == '9') {
        number = 9;
    } else {
        number = -1;
    }

    return number;
}

bool validateInput(string pinCode) {
    bool correctInput = true;
    for (int i = 0; i < 4; i++) {
        if (toInt(pinCode[i]) == -1) {
            correctInput = false;
            break;
        }
    }

    return correctInput;
}