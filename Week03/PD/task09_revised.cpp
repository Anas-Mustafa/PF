#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter 8-digit number: ";
    cin >> number;

    int digitEight = number % 10;
    int digitSeven = (number / 10) % 10;
    int digitSix = (number / 100) % 10;
    int digitFive = (number / 1000) % 10;
    int digitFour = (number / 10000) % 10;
    int digitThree = (number / 100000) % 10;
    int digitTwo = (number / 1000000) % 10;
    int digitOne = (number / 10000000) % 10;

    int sum = digitOne + digitTwo + digitThree + digitFour + digitFive + digitSix + digitSeven + digitEight;
    cout << "Sum of Digits: " << sum << endl;

    return 0;
}
