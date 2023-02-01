#include <iostream>
using namespace std;

int triangle(int rows);

int main() {
    int rows;
    cout << "Enter Rows: ";
    cin >> rows;

    int totalDots = triangle(rows);
    cout << "Total Dots Used: " << totalDots << endl;

    return 0;
}

int triangle(int rows) {
    int totalDots = 0;
    for (int i = 1; i <= rows; i++) {
        totalDots += i;
    }

    return totalDots;
}