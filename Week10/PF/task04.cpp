#include <iostream>
using namespace std;

int numbers[20];

bool isRepeatingCycle(int numbersCount, int cycleLength);

int main() {
    int numbersCount, cycleLength;
    cout << "N: ";
    cin >> numbersCount;

    for (int i = 0; i < numbersCount; i++) {
        cout << "Number: ";
        cin >> numbers[i];
    }
    cout << "Cycle Length: ";
    cin >> cycleLength;

    if (isRepeatingCycle(numbersCount, cycleLength)) {
        cout << "It's a repeating cycle." << endl;
    } else {
        cout << "It's not a repeating cycle." << endl;
    }

    return 0;
}

bool isRepeatingCycle(int numbersCount, int cycleLength) {
    bool isRepeating = true;
    if (cycleLength > numbersCount) {
        return true;
    }
    for (int i = 0; i < cycleLength; i++) {
        if (i + cycleLength > numbersCount - 1) {
            break;
        }
        if (numbers[i] != numbers[i + cycleLength]) {
            isRepeating = false;
            break;
        }
    }

    return isRepeating;
}