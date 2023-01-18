#include <iostream>
using namespace std;

int calculateGCD(int numberOne, int numberTwo);
int calculateLCM(int numberOne, int numberTwo, int GCD);

int main() {
    int numberOne, numberTwo;
    cout << "Number One: ";
    cin >> numberOne;
    cout << "Number Two: ";
    cin >> numberTwo;

    int GCD = calculateGCD(numberOne, numberTwo);
    int LCM = calculateLCM(numberOne, numberTwo, GCD);
    cout << "LCM: " << LCM << endl;

    return 0;
}

int calculateGCD(int numberOne, int numberTwo) {
    int GCD = 0;
    int smallInteger = numberOne;
    if (numberTwo < numberTwo) {
        smallInteger = numberTwo;
    }

    for (int i = smallInteger; i >= 1; i--) {
        if (numberOne % i == 0 && numberTwo % i == 0) {
            GCD = i;
            return GCD;
        }
    }

    return GCD;
}

int calculateLCM(int numberOne, int numberTwo, int GCD) {
    int LCM = (numberOne * numberTwo) / GCD;
    return LCM;
}