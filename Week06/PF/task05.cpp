#include <iostream>
using namespace std; 

float totalIncome(string screeningType, int rows, int columns);

int main() {
    string screeningType;
    int rows, columns;

    cout << "Type of Screening(Premiere | Normal | Discount): ";
    cin >> screeningType;
    cout << "Number of Rows: ";
    cin >> rows;
    cout << "Number of Columns: ";
    cin >> columns;

    float income = totalIncome(screeningType, rows, columns);
    cout << "Total Income: " << income << endl;

    return 0;
}

float totalIncome(string screeningType, int rows, int columns) {
    int totalSeats = rows * columns;
    float pricePerSeat = 0;
    if (screeningType == "Premiere")
        pricePerSeat = 12.0;
    else if (screeningType == "Normal")
        pricePerSeat = 7.50;
    else if (screeningType == "Discount")
        pricePerSeat = 5.0;

    return totalSeats * pricePerSeat;
}
