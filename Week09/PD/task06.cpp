#include <iostream>
using namespace std;

int main() {
    int arraySize, count;
    cout << "N: ";
    cin >> arraySize;
    int numbers[arraySize];
    int transformedNumbers[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << "Number at Index " << i << ": ";
        cin >> numbers[i];
    }

    cout << "Number of Times Tranformation to Perform: ";
    cin >> count;

    cout << "[";
    for (int i = 0; i < arraySize; i++) {
        if ((i + 1) % 2 == 0) {
            transformedNumbers[i] = numbers[i] - (2 * count);
        } else {
            transformedNumbers[i] = numbers[i] + (2 * count);
        }

        cout << transformedNumbers[i];
        if (i != arraySize - 1) {
            cout << ", ";
        } else {
            cout << "]";
        }
    }
    cout << endl;

    return 0;
}