#include <iostream>
using namespace std;

int main() {
    int totalNumbers, number;
    int twoDivisible = 0, threeDivisible = 0, fourDivisible = 0;
    cout << "Total Numbers: ";
    cin >> totalNumbers;

    for (int i = 0; i < totalNumbers; i++) {
        cout << "Number: ";
        cin >> number;

        if (number % 2 == 0) {
            twoDivisible++;
        }
        if (number % 3 == 0) {
            threeDivisible++;
        }
        if (number % 4 == 0) {
            fourDivisible++;
        }
    }

    float percentageTwoDivisible = twoDivisible * 100.0 / totalNumbers;
    float percentageThreeDivisible = threeDivisible * 100.0 / totalNumbers;
    float percentageFourDivisible = fourDivisible * 100.0 / totalNumbers;

    cout << "Divisible By Two: " << percentageTwoDivisible << "%" << endl;
    cout << "Divisible By Three: " << percentageThreeDivisible << "%" << endl;
    cout << "Divisible By Four: " << percentageFourDivisible << "%" << endl;

    return 0;
}