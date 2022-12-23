#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter 4-digit number: ";
    cin >> number;

    int digitFour = number % 10;
    int digitThree = (number / 10) % 10;
    int digitTwo = (number / 100) % 10;
    int digitOne = (number / 1000) % 10;

    int sum = digitOne + digitTwo + digitThree + digitFour;
    cout << "Sum of Digits: " << sum << endl;

    return 0;
}
