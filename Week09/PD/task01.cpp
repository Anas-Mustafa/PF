#include <iostream>
using namespace std;

int main() {
    string fruits[] = { "peach", "apple", "guava", "watermelon" };
    int fruitPrices[] = { 60, 70, 40, 30 };

    string fruit;
    int quantity, fruitIndex = -1, fruitsCount = 4;
    cout << "Fruit: ";
    cin >> fruit;
    cout << "Quantity: ";
    cin >> quantity;

    for (int i = 0; i < fruitsCount; i++) {
        if (fruit == fruits[i]) {
            fruitIndex = i;
            break;
        }
    }

    int totalPrice = fruitPrices[fruitIndex] * quantity;
    cout << quantity << " kg " << fruits[fruitIndex] << " costs PKR " << totalPrice << endl;

    return 0;
}