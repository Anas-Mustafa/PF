#include <iostream>
using namespace std;

int main() {
    float conversionRate = 0.45;
    float poundsValue;
    float kiloGramValue;
    
    cout << "Enter Kilogram: ";
    cin >> kiloGramValue;
    poundsValue = kiloGramValue / conversionRate;
    cout << "In Pounds: " << poundsValue << endl;

    return 0;
}