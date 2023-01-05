#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numberOne, numberTwo, greaterNumber, minimumNumber;
    cout << "Enter Number One: ";
    cin >> numberOne;
    cout << "Enter Number Two: ";
    cin >> numberTwo;
    
    greaterNumber = max(numberOne, numberTwo);
    minimumNumber = min(numberOne, numberTwo);
    cout << "Greater Number: " << greaterNumber << endl;
    cout << "Minimum Number: " << minimumNumber << endl;

    int squareRoot = sqrt(numberOne);
    cout << "Square Root of " << numberOne << ": " << squareRoot << endl;

    int squared = pow(numberOne, 2);
    cout << "Square Of " << numberOne << ": " << squared << endl;

    int cubeRoot = cbrt(numberTwo);
    cout << "Cube Root of " << numberTwo << ": " << cubeRoot << endl;

    cout << endl;
    float floatNumber;
    cout << "Enter a Floating Point Number: ";
    cin >> floatNumber;

    int floored = floor(floatNumber);
    int ceiled = ceil(floatNumber);
    cout << "Ceiled Number: " << ceiled << endl;
    cout << "Floored Number: " << floored << endl;

    return 0;
}