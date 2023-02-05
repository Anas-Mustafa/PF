#include <iostream>
using namespace std;

int main() {
    int arraySize, smallestNumber;
    cout << "N: ";
    cin >> arraySize;
    int numbers[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << "Enter Number: " << i + 1 << ": ";
        cin >> numbers[i];
    }

    smallestNumber = numbers[0];
    for (int i = 0; i < arraySize; i++) {
        if (numbers[i] < smallestNumber) {
            smallestNumber = numbers[i];
        }
    }

    cout << "Smallest Number: " << smallestNumber << endl;

    return 0;
}