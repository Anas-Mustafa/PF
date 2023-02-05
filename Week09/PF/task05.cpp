#include <iostream>
using namespace std;

int main() {
    int arraySize, num;
    cout << "N: ";
    cin >> arraySize;
    int numbers[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << "Enter Number: " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter Number To Multipy: ";
    cin >> num;

    for (int i = arraySize - 1; i >= 0; i--) {
        cout << numbers[i] * num << " ";
    }

    return 0;
}