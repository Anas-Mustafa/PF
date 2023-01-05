#include <iostream>
using namespace std;

int reverseNumber(int number);
bool isSymmetrical(int number);
int main() {
    int number;
    while(true) {
        cout << "Enter 3-Digit Number: ";
        cin >> number;

        bool symmetrical = isSymmetrical(number);
        if (symmetrical == true) {
	    cout << "Symmetrical" << endl;
        }
        if (symmetrical == false) {
	    cout << "Not Symmetrical" << endl;
        }
        cout << endl;
    }
    
    return 0;
}

bool isSymmetrical(int number) {
    int reversedNumber = reverseNumber(number);
    if (reversedNumber == number) {
	return true;
    }
    if (reversedNumber != number) {
	return false;
    }
}

int reverseNumber(int number) {
    int thirdDigit = number % 10;
    int secondDigit = (number / 10) % 10;
    int firstDigit = (number / 100) % 10;
    int reversedNumber = thirdDigit * 100 + secondDigit * 10 + firstDigit;
    return reversedNumber;
}