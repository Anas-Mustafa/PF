#include <iostream>
using namespace std;

void printDiscountedPrice(string countryName, int initialPrice);

int main() {
    int ticketPrice;
    string countryName;
    while (true) {
        cout << "Enter Country Name: ";
        cin >> countryName;
        cout << "Enter Ticket Price: ";
        cin >> ticketPrice;

        printDiscountedPrice(countryName, ticketPrice);
    } 

    return 0;
}

void printDiscountedPrice(string countryName, int initialPrice) {
    float discount = 0;
    if (countryName == "Pakistan") {
        discount = initialPrice * 0.05;
    }
    if (countryName == "Ireland") {
        discount = initialPrice * 0.1;
    }
    if (countryName == "India") {
        discount = initialPrice * 0.2;
    }
    if (countryName == "England") {
        discount = initialPrice * 0.3;
    }
    if (countryName == "Canada") {
        discount = initialPrice * 0.45;
    }
    int discountedPrice = initialPrice - discount;

    cout << "Final Price: " << discountedPrice << endl;
}
