#include <iostream>
using namespace std;

int main() {
    string name;
    int adultTicketPrice;
    int childTicketPrice;
    int adultTicketsSold;
    int childTicketsSold;
    int percentageToDonate;

    cout << "Enter Movie Name: ";
    cin >> name;
    cout << "Enter Adult Ticket Price: ";
    cin >> adultTicketPrice;
    cout << "Enter Child Ticket Price: ";
    cin >> childTicketPrice;
    cout << "Enter Number Of Adult Ticket Sold: ";
    cin >> adultTicketsSold;
    cout << "Enter Number Of Child Ticket Sold: ";
    cin >> childTicketsSold;
    cout << "Enter Percentage To Donate: ";
    cin >> percentageToDonate;

    int totalAmount = (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketsSold);
    int donatedAmount = totalAmount * (percentageToDonate / 100.00);
    int netAmount = totalAmount - donatedAmount;
   
    cout << "_________________________________________________________" << endl;
    cout << "Total Amount Generated: " << totalAmount << endl;
    cout << "Amount After Donation: " << netAmount << endl;
    
    return 0;
} 
