#include <iostream>
using namespace std;

int main() {
    int arraySize, sum = 0, num;
    bool isPresent;
    cout << "N: ";
    cin >> arraySize;
    int numbers[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << "Enter Number: " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter Number to find: ";
    cin >> num;

    for (int i = 0; i < arraySize; i++) {
        if (numbers[i] == num) {
            isPresent = true;
            break;
        }
    }

    if (isPresent) {
        cout << "Number " << num << " exists in the Array" << endl;
    } else {
        cout << "Number " << num << " does not exists in the Array" << endl;
    }

    return 0;
}