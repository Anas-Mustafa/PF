#include <iostream>
using namespace std;

int frequencyChecker(int number, int digit);

int main() {
    int number, digit;
    cout << "Number: ";
    cin >> number;
    cout << "Digit: ";
    cin >> digit;

    int frequency = frequencyChecker(number, digit);
    cout << "Frequency: " << frequency << endl;

    return 0;
}

int frequencyChecker(int number, int digit) {
    int frequency = 0;
    int lastDigit;
    while (number != 0) {
        lastDigit = number % 10;
        number = number / 10;
        if (lastDigit == digit)
            frequency = frequency + 1;
    }

    return frequency;
}