#include <iostream>
#include <cmath>
using namespace std;

double calculateRemainingAmount(double budget, string ticketType, int people);

int main() {
    double budget;
    int people;
    string ticketType;

    cout << "Budget: ";
    cin >> budget;
    cout << "Type of Ticket(VIP | Normal): ";
    cin >> ticketType;
    cout << "Number of People: ";
    cin >> people;

    double remainingAmount = calculateRemainingAmount(budget, ticketType, people);
    if (remainingAmount >= 0) {
        cout << "Yes! You have " << remainingAmount << " QR left." << endl;
    } else {
        cout << "Not enough money! You need " << abs(remainingAmount) << " QR." << endl;
    }

    return 0;
}

double calculateRemainingAmount(double budget, string ticketType, int people) {
    int percentTransportation = 0;
    double ticketPrice = 0;
    if (people > 0) {
        if (people < 5) {
            percentTransportation = 75;
        } else if (people < 10) {
            percentTransportation = 60;
        } else if (people < 25) {
            percentTransportation = 50;
        } else if (people < 50) {
            percentTransportation = 40;
        } else {
            percentTransportation = 25;
        }
    }

    if (ticketType == "VIP") {
        ticketPrice = 499.99;
    } else if (ticketType == "Normal") {
        ticketPrice = 249.99;
    }

    double remainingBudget = budget - (percentTransportation / 100.0) * budget;
    double totalPrice = people * ticketPrice;

    return remainingBudget - totalPrice;
}