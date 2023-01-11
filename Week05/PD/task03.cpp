#include <iostream>
using namespace std;

float taxCalculator(char itemCode, float price);
string itemTypeIndicator(char itemCode);

int main() {
    float itemPrice;
    char itemCode;

    cout << "Item Price: ";
    cin >> itemPrice;
    cout << "Item Code (M | E | S | V | T): ";
    cin >> itemCode;

    float taxAmount = taxCalculator(itemCode, itemPrice);
    string itemType = itemTypeIndicator(itemCode);

    float finalPrice = itemPrice + taxAmount;
    cout << "The final price on a vechile of type " << itemType << " after adding the tax is $" << finalPrice << endl;

    return 0;
}
float taxCalculator(char itemCode, float itemPrice) {
    int taxRate = 0;
    
    if (itemCode == 'M') {
        taxRate = 6;
    }
    if (itemCode == 'E') {
        taxRate = 8;
    }
    if (itemCode == 'S') {
        taxRate = 10;
    }
    if (itemCode == 'V') {
        taxRate = 12;
    }
    if (itemCode == 'T') {
        taxRate = 15;
    }

    float taxAmount = (itemPrice * taxRate) / 100;
    return taxAmount;
}
string itemTypeIndicator(char itemCode) {
    string itemType = "Unknown";
    
    if (itemCode == 'M') {
        itemType = "Motorcycle";
    }
    if (itemCode == 'E') {
        itemType = "Electric";
    }
    if (itemCode == 'S') {
        itemType = "Sedan";
    }
    if (itemCode == 'V') {
        itemType = "Van";
    }
    if (itemCode == 'T') {
        itemType = "Truck";
    }

    return itemType;
}