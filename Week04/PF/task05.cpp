#include <iostream>
using namespace std;

void calculateBill(string day, int amount);

int main() {
    string day;
    int amount;

    while(true) {
	cout << "Enter Day: ";
	cin >> day;
	cout << "Enter Purchase Amount: ";
	cin >> amount;

	calculateBill(day, amount);
    }

    return 0;
}

void calculateBill(string day, int amount) {
    int discountAmount = amount * 0.05;
    if (day == "sunday") {
	discountAmount = amount * 0.1;
    }
    int netAmount = amount - discountAmount;
    cout << "Payable Amount: " << netAmount << endl << endl;
}    
