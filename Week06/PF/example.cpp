#include <iostream>
using namespace std;

int findGreatest(int numberOne, int numberTwo, int numberThree);
int main() {
    int numberOne, numberTwo, numberThree;
    cout << "Number One: ";
    cin >> numberOne;
    cout << "Number Two: ";
    cin >> numberTwo;
    cout << "Number Three: ";
    cin >> numberThree;

    int greatestNumber = findGreatest(numberOne, numberTwo, numberThree);
    cout << "Greatest Number: " << greatestNumber << endl;

    return 0;
}

int findGreatest(int numberOne, int numberTwo, int numberThree) {
    int greatestNumber;
    if (numberOne > numberTwo) {
        if (numberOne > numberThree) {
            greatestNumber = numberOne;
        }
        else {
            greatestNumber = numberThree;
        }
    } else {
        if (numberTwo > numberThree) {
            greatestNumber = numberTwo;
        } else {
            greatestNumber = numberThree;
        }
    }

    return greatestNumber;
}
