#include <iostream>
using namespace std;

void printShape(int rows);

int main() {
    int rows;
    cout << "Enter Number Of Rows: ";
    cin >> rows;

    printShape(rows);

    return 0;
}

void printShape(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = i; j >= 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
}