#include <iostream>
using namespace std;

int sumOfDigits(int number);
string evenishOddish(int number);

int main() {
    int number;
    while(true) {
        cout << "Enter 5-Digit Number: ";
        cin >> number;

        string result = evenishOddish(number);
        cout << result << endl << endl;
    }

    return 0;
}

string evenishOddish(int number) {
    int sum = sumOfDigits(number);
    if (sum % 2 == 0) {
        return "Evenish";
    }
    if (sum % 2 == 1) {
        return "Oddish";
    }
    return 0;
}

int sumOfDigits(int number) {
    int fifthDigit = number % 10;
    int fourthDigit = (number / 10) % 10;
    int thirdDigit = (number / 100) % 10;
    int secondDigit = (number / 1000) % 10;
    int firstDigit = (number / 10000) % 10;

    return firstDigit + secondDigit + thirdDigit + fourthDigit + fifthDigit;
}