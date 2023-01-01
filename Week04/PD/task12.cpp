#include <iostream>
using namespace std;

int main() {
    float redRosePrice = 2.00;
    float whiteRosePrice = 4.10;
    float tulipsPrice = 2.50;
    int redRoseQuantity, whiteRoseQuantity, tulipsQuantity;

    cout << "Red Rose: ";
    cin >> redRoseQuantity;
    cout << "White Rose: ";
    cin >> whiteRoseQuantity;
    cout << "Tulips: ";
    cin >> tulipsQuantity;

    float totalPrice = redRoseQuantity * redRosePrice + whiteRoseQuantity * whiteRosePrice + tulipsQuantity * tulipsPrice;
    float discount = 0;

    if (totalPrice > 200) {
        discount = 0.2 * totalPrice;
    }

    float payablePrice = totalPrice - discount;
    cout << "Original Price: " << totalPrice << endl;
    cout << "Price after Discount: " << payablePrice << endl;

    return 0;
}