#include <iostream>
using namespace std;

void isEven(int number);

int main() {
    int number;

    while (true) {
	cout << "Enter Number: ";
	cin >> number;
	isEven(number);
    }

    return 0;
}

void isEven(int number) {
    if (number % 2 == 0) {
	cout << number << " is Even Number" << endl;
    }
    if (number % 2 != 0) {
	cout << number << " is Odd Number" << endl;
    }
}
