#include <iostream>
using namespace std;

int main() {
    int redCars = 0, totalCars = 0;
    int cars[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            cout << cars[col][row] << endl;
        }
    }

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            totalCars += cars[row][col];
        }
    }

    cout << endl;
    for (int row = 0; row < 5; row++) {
        redCars += cars[row][0];
    }
    cout << "Red Cars Count: " << redCars << endl;
    cout << "Total Cars Count: " << totalCars << endl;
}