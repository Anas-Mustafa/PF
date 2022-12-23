#include <iostream>
using namespace std;

int main() {
    float vegetablePrice;
    float fruitPrice;
    int totalVegetables;
    int totalFruits;
    float coinExchangeRate = 1.94;

    cout << "Enter Vegetable Price Per Kilogram: ";
    cin >> vegetablePrice;
    cout << "Enter Fruit Price Per Kilogram: ";
    cin >> fruitPrice;
    cout << "Enter Total Kilograms Of Vegetables: ";
    cin >> totalVegetables;
    cout << "Enter Total Kilograms Of Vegetables: ";
    cin >> totalFruits;

    float totalCoins = (totalVegetables * vegetablePrice) + (totalFruits * fruitPrice);
    float rupeesEarned = totalCoins / coinExchangeRate;
    cout << "Total Rupees Earned: " << rupeesEarned;

    return 0;
}
