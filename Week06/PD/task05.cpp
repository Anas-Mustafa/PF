#include <iostream>
using namespace std;

float calculatePrice(string fruit, string day, float quantity);

int main() {
    string fruit, day;
    float quantity;

    cout << "Fruit: ";
    cin >> fruit;
    cout << "Day: ";
    cin >> day;
    cout << "Quantity: ";
    cin >> quantity;

    float price = calculatePrice(fruit, day, quantity);
    if (price == -1) {
        cout << "Invalid Input" << endl;
        return 1;
    }
    cout << "Price: $" << price << endl;

    return 0;
}

float calculatePrice(string fruit, string day, float quantity) {
    float price;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
        if (fruit == "banana")
            price = 2.50;
        else if (fruit == "apple")
            price = 1.20;
        else if (fruit == "orange")
            price = 0.85;
        else if (fruit == "grapefruit")
            price = 1.45;
        else if (fruit == "kiwi")
            price = 2.70;
        else if (fruit == "pineapple")
            price = 5.50;
        else if (fruit == "grapes")
            price = 3.85;
        else
            return -1;
    } else if (day == "Saturday" || day == "Sunday") {
        if (fruit == "banana")
            price = 2.70;
        else if (fruit == "apple")
            price = 1.25;
        else if (fruit == "orange")
            price = 0.90;
        else if (fruit == "grapefruit")
            price = 1.60;
        else if (fruit == "kiwi")
            price = 3.00;
        else if (fruit == "pineapple")
            price = 5.60;
        else if (fruit == "grapes")
            price = 4.20;
        else
            return -1;
    } else {
        return -1;
    }

    return price * quantity;
}