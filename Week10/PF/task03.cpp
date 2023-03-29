#include <iostream>
using namespace std;


bool isStrictHighest(int lastNumber, int currentNumber, int nextNumber);

int main() {
    int numbers[20];
    int highestNumbers[20];
    int numbersCount;
    cout << "N: ";
    cin >> numbersCount;

    for (int i = 0; i < numbersCount; i++) {
        cout << "Number: ";
        cin >> numbers[i];
    }

    int highestNumberCount = 0;
    for (int i = 1; i < numbersCount - 1; i++) {
        int lastNumber = numbers[i - 1];
        int currentNumber = numbers[i];
        int nextNumber = numbers[i + 1];

        if (isStrictHighest(lastNumber, currentNumber, nextNumber)) {
            highestNumbers[highestNumberCount] = currentNumber;
            highestNumberCount++;
        }
    }

    cout << "[";
    for (int i = 0; i < highestNumberCount; i++) {
        cout << highestNumbers[i];
        if (i != highestNumberCount - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}

bool isStrictHighest(int lastNumber, int currentNumber, int nextNumber) {
    if (currentNumber > lastNumber && currentNumber > nextNumber) {
        return true;
    }
    return false;
}