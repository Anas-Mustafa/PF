#include <iostream>
using namespace std;

int main() {
    int numberOne;
    int numberTwo;
    int numberThree;
    int numberFour;
    int numberFive;

    cout << "Enter 1st number: ";
    cin >> numberOne;
    cout << "Enter 2nd number: ";
    cin >> numberTwo;
    cout << "Enter 3rd number: ";
    cin >> numberThree;
    cout << "Enter 4th number: ";
    cin >> numberFour;
    cout << "Enter 5th number: ";
    cin >> numberFive;
    int sum = numberOne + numberTwo + numberThree + numberFour + numberFive;

    cout << "Enter 6th number: ";
    cin >> numberOne;
    cout << "Enter 7th number: ";
    cin >> numberTwo;
    cout << "Enter 8th number: ";
    cin >> numberThree;
    cout << "Enter 9th number: ";
    cin >> numberFour;
    cout << "Enter 10th number: ";
    cin >> numberFive;
    int product = numberOne * numberTwo * numberThree * numberFour * numberFive;

    cout << "Enter 11th number: ";
    cin >> numberOne;
    cout << "Enter 12th number: ";
    cin >> numberTwo;
    cout << "Enter 13th number: ";
    cin >> numberThree;
    cout << "Enter 14th number: ";
    cin >> numberFour;
    cout << "Enter 15th number: ";
    cin >> numberFive;
    int subtraction = numberOne - numberTwo - numberThree - numberFour - numberFive;

    int result = (sum + product) - subtraction;
    cout << "Total: " << result << endl;

    return 0;
}