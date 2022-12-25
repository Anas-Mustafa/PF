#include <iostream>
using namespace std;

int main() {
    int bagCost;
    int bagSize;
    int area;

    cout << "Enter Bag Size in Pounds: ";
    cin >> bagSize;
    cout << "Enter Cost of Bag: ";
    cin >> bagCost;
    cout << "Enter Area Covered by each Bag in Square Feet: ";
    cin >> area;

    int costPerPound = bagCost / bagSize;
    int costPerArea = bagCost / area;
    
    cout << "_______________________________________________________" << endl;
    cout << "Cost of fertilizer per pound: " << costPerPound << endl;
    cout << "Cost of fertilizing the area per square feet: " << costPerArea << endl;

    return 0;
}
