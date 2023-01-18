#include <iostream>
using namespace std;

float calculatePrice(float money, int year);

int main() {
    float money;
    int year;
    cout << "Inherited Money: ";
    cin >> money;
    cout << "Year: ";
    cin >> year;
    float price = calculatePrice(money, year);

    if (price < 0) {
        cout << "He will need " << -1 * price << " dollars to survive." << endl;
    } else {
        cout << "Yes! He will live a carefree life and will have " << price << " dollars left" << endl;
    }
}

float calculatePrice(float money, int year) {
    int startingYear = 1800;
    int totalAmount = 0;
    int age = 18;
    for (int currentYear = startingYear; currentYear <= year; currentYear++, age++) {
        if (currentYear % 2 == 0) {
            totalAmount += 12000;
        } else {
            totalAmount += 12000 + 50 * age;
        }
    }

    float remainingAmount = money - totalAmount;
    return remainingAmount;
}