#include <iostream>
using namespace std;

void printCharacter(char character, int times);
void printShape(int rows);

int main() {
    int rows;
    cout << "Enter Number Of Rows: ";
    cin >> rows;

    printShape(rows);

    return 0;
}

void printCharacter(char character, int times) {
    for (int i = 0; i < times; i++) {
        cout << character;
    }
}

void printShape(int rows) {
    for (int i = 1; i <= rows; i++) {
        printCharacter('*', i);
        printCharacter(' ', rows * 2 - i * 2);
        printCharacter('*', i);
        cout << endl;
    }
}