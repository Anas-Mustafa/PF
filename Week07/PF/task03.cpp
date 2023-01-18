#include <iostream>
using namespace std;

int totalDigits(int number);

int main() {
    int number;
    cout << "Enter Number: ";
    cin >> number;

    int digitsNumber = totalDigits(number);
    cout << "Number of Digits: " << digitsNumber << endl;

    return 0;
}

int totalDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }

    return count;
}