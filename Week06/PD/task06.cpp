#include <iostream>
using namespace std;

int main() {
    string month;
    int days, studioDiscount = 0, apartmentDiscount = 0;
    float studioRent, apartmentRent;

    cout << "Month: ";
    cin >> month;
    cout << "Days: ";
    cin >> days;

    if (month == "May" || month == "October") {
        studioRent = 50;
        apartmentRent = 65;
        if (days > 14) {
            studioDiscount = 30;
        } else if (days > 7) {
            studioDiscount = 5;
        }
    } else if (month == "June" || month == "September") {
        studioRent = 75.20;
        apartmentRent = 68.70;
        if (days > 14) {
            studioDiscount = 20;
        }
    } else if (month == "July" || month == "August") {
        studioRent = 76;
        apartmentRent = 77;
    } else {
        cout << "Invalid Month" << endl;
        cout << "Only Valid Months are: " << endl;
        cout << "- May" << endl;
        cout << "- June" << endl;
        cout << "- July" << endl;
        cout << "- August" << endl;
        cout << "- September" << endl;
        cout << "- October" << endl;
        return 1;
    }

    if (days > 14) {
        apartmentDiscount = 10;
    }

    float totalStudioRent = studioRent * days;
    float totalApartmentRent = apartmentRent * days;
    totalStudioRent -= studioDiscount / 100.0 * totalStudioRent;
    totalApartmentRent -= apartmentDiscount / 100.0 * totalApartmentRent;

    cout << "Apartment: $" << totalApartmentRent << endl;
    cout << "Studio: $" << totalStudioRent << endl;

    return 0;
}