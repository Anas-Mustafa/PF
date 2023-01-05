#include <iostream>
#include <cmath>
using namespace std;

float applyQuadraticFormula(int a, int b, int c, int signOffset);

int main() {
    int a, b, c;
    float positiveX, negativeX;
    while(true) {
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "c: ";
        cin >> c;
	
	positiveX = applyQuadraticFormula(a, b, c, 1);
        negativeX = applyQuadraticFormula(a, b, c, -1);

        cout << "x = " << positiveX << endl;
        cout << "x = " << negativeX << endl << endl;
    }

    return 0;
}

float applyQuadraticFormula(int a, int b, int c, int signOffset) {
    int bSquare = pow(b, 2);
    float root = signOffset * sqrt(bSquare - 4 * a * c);
    float x = (-1 * b + root) / (2 * a);
    return x;
}