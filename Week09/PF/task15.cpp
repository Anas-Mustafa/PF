#include <iostream>
using namespace std;

int main() {
    int firstNumbers[] = { 1,2,3,4,5,6,7 };
    int secondNumbers[] = { 6, 9 };
    int firstNumbersSize = sizeof(firstNumbers) / sizeof(firstNumbers[0]);
    int secondNumbersSize = 2;
    int arraySize = firstNumbersSize + secondNumbersSize;
    int mergeNumbers[arraySize];

    int index = 0;
    mergeNumbers[index] = secondNumbers[0];
    index++;

    for (int i = 0; i < firstNumbersSize; i++, index++) {
        mergeNumbers[index] = firstNumbers[i];
    }
    mergeNumbers[index] = secondNumbers[1];

    cout << "[";
    for (int i = 0; i < arraySize; i++) {
        cout << mergeNumbers[i];
        if (i != arraySize - 1) {
            cout << ", ";
        } else {
            cout << "]";
        }
    }
    cout << endl;

    return 0;
}