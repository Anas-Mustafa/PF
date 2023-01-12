#include <iostream>
using namespace std;

float calculateDiscount(string month, string day, float amount);

int main() {
    string month, day;
    float amount;

    cout << "Amount: ";
    cin >> amount;
    cout << "Month: ";
    cin >> month;
    cout << "Day: ";
    cin >> day;

    float payable = calculateDiscount(month, day, amount);
    cout << "Payable Amount: " << payable << endl;

    return 0;
}

float calculateDiscount(string month, string day, float amount) {
    float discountPercentage = 0;
    if (day == "Sunday" && (month == "October" || month == "March" || month == "August")) {
        discountPercentage = 10;
    } else if (day == "Monday" && (month == "November" || month == "December")) {
        discountPercentage = 5;
    }

    float payable = amount - (amount * discountPercentage / 100);
    return payable;
}
