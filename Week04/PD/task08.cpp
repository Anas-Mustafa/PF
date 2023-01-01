#include <iostream>
using namespace std;

void checkEquality(int numberOne, int numberTwo);
int main() {
    int numberOne, numberTwo;
    cout << "Enter Number One: ";
    cin >> numberOne;
    cout << "Enter Number Two: ";
    cin >> numberTwo;
    checkEquality(numberOne, numberTwo);

    return 0;
}

void checkEquality(int numberOne, int numberTwo) {
    if (numberOne == numberTwo) {
        cout << "true" << endl;
    }
    if (numberOne != numberTwo) {
        cout << "false" << endl;
    }
}    
