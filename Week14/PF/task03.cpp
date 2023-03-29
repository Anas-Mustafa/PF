#include <iostream>
using namespace std;

void swapNumbers(int &numberOne, int &numberTwo);

int main() {
    int numberOne = 10;
    int numberTwo = 20;
    cout << "---=Before Swapping=---" << endl;
    cout << "Number One: " << numberOne << endl;
    cout << "Number Two: " << numberTwo << endl;
    cout << endl;
    swapNumbers(numberOne, numberTwo);
    cout << "---=After Swapping=---" << endl;
    cout << "Number One: " << numberOne << endl;
    cout << "Number Two: " << numberTwo << endl;
}

void swapNumbers(int &numberOne, int &numberTwo) {
    int temp = numberOne;
    numberOne = numberTwo;
    numberTwo = temp;
}