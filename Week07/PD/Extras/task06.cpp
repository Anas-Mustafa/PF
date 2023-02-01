#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int number);

int main() {
    int startingRange, endingRange;
    cout << "Input number for starting range: ";
    cin >> startingRange;
    cout << "Input number for ending range: ";
    cin >> endingRange;

    for (int i = 1; i <= endingRange; i++) {
        if (checkPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

bool checkPrime(int number) {
    bool isPrime = true;
    if (number < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            isPrime = false;
        }
    }

    return isPrime;
}