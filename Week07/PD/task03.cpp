#include <iostream>
using namespace std;

void printShape(int rows);
void printCharacter(char character, int times);
void printUpperShape(int rows);
void printMiddleShape(int rows);
void printLowerShape(int rows);

int main() {
    int rows;
    cout << "Enter Number Of Rows: ";
    cin >> rows;

    printShape(rows);

    return 0;
}

void printShape(int rows) {
    printUpperShape(rows / 2);
    printMiddleShape(rows / 2);
    printLowerShape(rows / 2);
}

void printCharacter(char character, int times) {
    for (int i = 0; i < times; i++) {
        cout << character;
    }
}

void printUpperShape(int rows) {
    for (int i = 1; i <= rows; i++) {
        printCharacter(' ', rows + 1 - i);
        printCharacter('*', i);
        cout << endl;
    }
}

void printMiddleShape(int rows) {
    printCharacter('*', rows + 1);
    cout << endl;
    printCharacter('*', rows + 1);
    cout << endl;
}

void printLowerShape(int rows) {
    for (int i = rows; i >= 1; i--) {
        printCharacter(' ', rows + 1 - i);
        printCharacter('*', i);
        cout << endl;
    }
}