#include <iostream>
using namespace std;

void issueChallan(int speed);

int main() {
    int carSpeed;
    cout << "Enter Car Speed: ";
    cin >> carSpeed;

    issueChallan(carSpeed);

    return 0;
}

void issueChallan(int speed) {
    if (speed > 100) {
        cout << "Halt... YOU WILL BE CHALLENGED!!!" << endl;
    }
    if (speed <= 100) {
        cout << "Perfect! You’re going good." << endl;
    }
}

