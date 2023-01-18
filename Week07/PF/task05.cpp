#include <iostream>
using namespace std;

int digitSum(int number);

int main() {
    int number;
    cout << "Number: ";
    cin >> number;

    int sum = digitSum(number);
    cout << "Sum: " << sum << endl;

    return 0;
}

int digitSum(int number) {
    int lastDigit, sum = 0;
    while (number != 0) {
        lastDigit = number % 10;
        number = number / 10;
        sum = sum + lastDigit;
    }

    return sum;
}