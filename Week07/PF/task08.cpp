#include <iostream>
using namespace std;

float calculateMoney(int age, float machinePrice, int toyPrice);
int main() {
    int age, toyPrice;
    float machinePrice;
    cout << "Age: ";
    cin >> age;
    cout << "Machine Price: ";
    cin >> machinePrice;
    cout << "Toy Unit Price: ";
    cin >> toyPrice;
    float leftMoney = calculateMoney(age, machinePrice, toyPrice);

    if (leftMoney < 0) {
        cout << "No! " << -1 * leftMoney << " is the remaining money." << endl;
    } else {
        cout << "Yes! " << leftMoney << " is the insufficiency amount." << endl;
    }

    return 0;
}

float calculateMoney(int age, float machinePrice, int toyPrice) {
    int brotherMoney = 1;
    int totalToysPrice = 0;
    int totalMoneyGift = 0;
    int moneyGift = 10;
    int moneyIncrement = 10;

    for (int i = 1; i <= age; i++) {
        if (i % 2 == 0) {
            totalMoneyGift += moneyGift - brotherMoney;
            moneyGift += moneyIncrement;
        } else {
            totalToysPrice += toyPrice;
        }
    }
    int totalMoney = totalToysPrice + totalMoneyGift;
    float remainingMoney = totalMoney - machinePrice;

    return remainingMoney;
}