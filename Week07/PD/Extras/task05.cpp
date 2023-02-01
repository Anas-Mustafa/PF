#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    bool isPrime = true;
    cout << "Enter Number: ";
    cin >> number;

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            isPrime = false;
        }
    }

    if (isPrime) {
        cout << number << " is a Prime Number" << endl;
    } else {
        cout << number << " is not a Prime Number" << endl;
    }

    return 0;
}