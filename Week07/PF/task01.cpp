#include <iostream>
using namespace std;

void printTable(int number);

int main() {
    int number;

    cout << "Enter Number: ";
    cin >> number;
    printTable(number);
}

void printTable(int number) {
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << i * number << endl;
    }
}