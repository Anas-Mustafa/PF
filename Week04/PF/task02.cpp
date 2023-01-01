#include <iostream>
using namespace std;

void add(int numberOne, int numberTwo);
void multiply(int numberOne, int numberTwo);
void subtract(int numberOne, int numberTwo);
void divide(int numberOne, int numberTwo);

int main() {
    int numberOne, numberTwo;
    char operation;

    while (true) {
        cout << "Enter Number One: ";
        cin >> numberOne;
        cout << "Enter Number Two: ";
        cin >> numberTwo;
        cout << endl << "---------------------" << endl;
        cout << "Enter '+' to Add" << endl;
        cout << "Enter '-' to Subtract" << endl;
        cout << "Enter '*' to Multiply" << endl;
        cout << "Enter '+' to Divide" << endl;
        cout << "---------------------" << endl;
        cout << "Enter Operator: ";
        cin >> operation;

        cout << endl;

        if (operation == '+') {
	    add(numberOne, numberTwo);
        }
        if (operation == '-') {
	    subtract(numberOne, numberTwo);
        }
        if (operation == '*') {
	multiply(numberOne, numberTwo);
        }
        if (operation == '/') {
	    divide(numberOne, numberTwo);
        }

        cout << endl;
    }

    return 0;
}

void add(int numberOne, int numberTwo) {
    int sum = numberOne + numberTwo;    
    cout << "Sum: " << sum << endl;
}

void multiply(int numberOne, int numberTwo) {
    int product = numberOne * numberTwo;
    cout << "Product: " << product << endl;
}

void subtract(int numberOne, int numberTwo) {
    int result = numberOne - numberTwo;    
    cout << "Subtraction: " << result << endl;
}

void divide(int numberOne, int numberTwo) {
    int result = numberOne / numberTwo;    
    cout << "Division: " << result << endl;
}