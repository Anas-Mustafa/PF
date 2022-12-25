#include <iostream>
using namespace std;

int main() {
    float dollarPrice = 226.58;
    float dollarValue;
    float rupeesValue;
    
    cout << "Enter Dollar Amount: ";
    cin >> dollarValue;
    rupeesValue = dollarValue * dollarPrice;
    cout << "In Rupees: " << rupeesValue;

    return 0;
}
