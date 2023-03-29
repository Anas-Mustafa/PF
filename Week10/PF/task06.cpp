#include <iostream>
using namespace std;

int main() {
    int numbersCount, smallestNumber, smallestIndex;
    cout << "N: ";
    cin >> numbersCount;
    int numbers[numbersCount];

    for (int i = 0; i < numbersCount; i++) {
        cout << "Number: ";
        cin >> numbers[i];
    }

    for (int i = 0; i < numbersCount; i++) {
        smallestNumber = numbers[i];
        smallestIndex = i;
        for (int j = i; j < numbersCount; j++) {
            if (numbers[j] < smallestNumber) {
                smallestNumber = numbers[j];
                smallestIndex = j;
            }
        }
        numbers[smallestIndex] = numbers[i];
        numbers[i] = smallestNumber;
    }

    cout << "[";
    for (int i = 0; i < numbersCount; i++) {
        cout << numbers[i];
        if (i != numbersCount - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}