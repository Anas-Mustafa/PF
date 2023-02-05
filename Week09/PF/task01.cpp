#include <iostream>
using namespace std;

int main() {
    int arraySize;
    cout << "Enter Array Size: ";
    cin >> arraySize;
    int numbers[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << "Enter Number: ";
        cin >> numbers[i];
    }

    for (int i = 0; i < arraySize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}