#include <iostream>
using namespace std;

void amplify(int range);

int main() {
    int range;
    cout << "Enter Range: ";
    cin >> range;

    amplify(range);

    return 0;
}

void amplify(int range) {
    for (int i = 1; i <= range; i++) {
        if (i % 4 == 0) {
            cout << i * 10;
        } else {
            cout << i;
        }
        if (i != range) {
            cout << ", ";
        }
    }
}