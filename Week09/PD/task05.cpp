#include <iostream>
using namespace std;

int main() {
    int arraySize = 4;
    string values[arraySize];
    bool isSame = true;

    for (int i = 0; i < arraySize; i++) {
        cout << "Value at Index " << i << ": ";
        cin >> values[i];
    }

    string initialValue = values[0];
    for (int i = 0; i < arraySize; i++) {
        if (initialValue != values[i]) {
            isSame = false;
            break;
        }
    }

    if (isSame) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}