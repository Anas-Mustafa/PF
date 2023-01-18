#include <iostream>
using namespace std;

void printPercentage(int totalNumber);

int main() {
    int totalNumber;
    cout << "Enter Total Numbers: ";
    cin >> totalNumber;

    printPercentage(totalNumber);

    return 0;
}

void printPercentage(int totalNumber) {
    int number;
    int counterOne = 0, counterTwo = 0, counterThree = 0, counterFour = 0, counterFive = 0;
    for (int i = 0; i < totalNumber; i++) {
        cout << "Number: ";
        cin >> number;
        if (number < 200)
            counterOne += 1;
        else if (number < 400)
            counterTwo += 1;
        else if (number < 600)
            counterThree += 1;
        else if (number < 800)
            counterFour += 1;
        else
            counterFive += 1;
    }

    float percentageOne = counterOne * 100 / totalNumber;
    float percentageTwo = counterTwo * 100 / totalNumber;
    float percentageThree = counterThree * 100 / totalNumber;
    float percentageFour = counterFour * 100 / totalNumber;
    float percentageFive = counterFive * 100 / totalNumber;

    cout << "    Range\t\t    Percentage" << endl;
    cout << "(-Infinity, 200)\t\t" << percentageOne << "%" << endl;
    cout << "[200, 400)      \t\t" << percentageTwo << "%" << endl;
    cout << "[400, 600)      \t\t" << percentageThree << "%" << endl;
    cout << "[600, 800)      \t\t" << percentageFour << "%" << endl;
    cout << "[800, Infinity) \t\t" << percentageFive << "%" << endl;
}