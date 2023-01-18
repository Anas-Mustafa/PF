#include <iostream>
using namespace std;

void displayFibSeries(int count);

int main() {
    int count;
    cout << "Enter Number: ";
    cin >> count;

    displayFibSeries(count);

    return 0;
}

void displayFibSeries(int count) {
    int numberOne = -1;
    int numberTwo = 1;

    for (int i = 0; i < count; i++) {
        int sum = numberOne + numberTwo;
        cout << sum;
        if (i != count - 1) {
            cout << ", ";
        }
        numberOne = numberTwo;
        numberTwo = sum;
    }
    cout << endl;
}