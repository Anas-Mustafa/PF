#include <iostream>
using namespace std;

int main() {
    int arraySize;
    float sum = 0;
    cout << "N: ";
    cin >> arraySize;
    float numbers[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << "Enter Resistance: " << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < arraySize; i++) {
        sum += numbers[i];
    }

    cout << "Total Resistance: " << sum << endl;
    return 0;
}