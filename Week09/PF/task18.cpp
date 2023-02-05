#include <iostream>
using namespace std;

int main() {
    int arraySize = 4;
    int money[arraySize];
    float itemPrice;
    float amount = 0;

    for (int i = 0; i < arraySize; i++) {
        cout << "Enter Number at Array Index " << i << ": ";
        cin >> money[i];
    }
    cout << "Price of Item To Buy: ";
    cin >> itemPrice;

    for (int i = 0; i < arraySize; i++) {
        if (i == 0) {
            amount += money[i] * 0.25;
        } else if (i == 1) {
            amount += money[i] * 0.10;
        } else if (i == 2) {
            amount += money[i] * 0.05;
        } else {
            amount += money[i] * 0.01;
        }
    }

    cout << "[";
    for (int i = 0; i < arraySize; i++) {
        cout << money[i];
        if (i != arraySize - 1) {
            cout << ", ";
        } else {
            cout << "], ";
        }
    }
    cout << itemPrice << " -> ";
    if (amount < itemPrice) {
        cout << "false";
    } else {
        cout << "true";
    }
    cout << endl;

    return 0;
}