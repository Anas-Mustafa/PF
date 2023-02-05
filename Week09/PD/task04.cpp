#include <iostream>
using namespace std;

bool containsSeven(int number);

int main() {
    int arraySize;
    cout << "N: ";
    cin >> arraySize;
    int numbers[arraySize];
    bool isPresent = false;

    for (int i = 0; i < arraySize; i++) {
        cout << "Number at Index " << i << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < arraySize; i++) {
        if (containsSeven(numbers[i])) {
            isPresent = true;
            break;
        }
    }

    if (isPresent) {
        cout << "BOOM!" << endl;
    } else {
        cout << "there is no 7 in the array" << endl;
    }

    return 0;
}

bool containsSeven(int number) {
    int isPresent = false;
    int lastDigit;
    while (number != 0) {
        lastDigit = number % 10;
        if (lastDigit == 7) {
            isPresent = true;
            break;
        }
        number = number / 10;
    }

    return isPresent;
}