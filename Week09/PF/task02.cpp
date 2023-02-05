#include <iostream>
using namespace std;

int main() {
    int arraySize, sum = 0;
    cout << "N: ";
    cin >> arraySize;
    int numbers[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << "Enter Number: " << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < arraySize; i++) {
        sum += numbers[i];
    }
    float average = (float)sum / arraySize;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}