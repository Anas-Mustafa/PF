#include <iostream>
using namespace std;

int add(int numberOne, int numberTwo);
int divide(int numberOne, int numberTwo);
int isGreater(int numberOne, int numberTwo);

int main() {
    int numberOne, numberTwo;
    cout << "Enter Number One: ";
    cin >> numberOne;
    cout << "Enter Number Two: ";
    cin >> numberTwo;

    int total = add(numberOne, numberTwo);
    cout << "Sum: " << total << endl;

    int quotient = divide(numberOne, numberTwo);
    cout << "Divide: " << quotient << endl;

    int greater = isGreater(numberOne, numberTwo);
    cout << "Greater Number: " << greater << endl;

    return 0;
}

int add(int numberOne, int numberTwo) {
    return numberOne + numberTwo;
}

int divide(int numberOne, int numberTwo) {
    return numberOne / numberTwo;
}

int isGreater(int numberOne, int numberTwo) {
    int greaterNumber = numberOne;
    if (numberTwo > numberOne) {
        greaterNumber = numberTwo;
    }
    
    return greaterNumber;
}