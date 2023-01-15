#include <iostream>
using namespace std;

int main() {
    string month;
    int day;
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;

    if ((month == "March" && day >= 21 && day <= 31) || (month == "April" && day >= 1 && day <= 19)) {
        cout << "Aries" << endl;
    } else if ((month == "April" && day >= 20 && day <= 30) || (month == "May" && day >= 1 && day <= 20)) {
        cout << "Tauras" << endl;
    } else if ((month == "May" && day >= 21 && day <= 30) || (month == "June" && day >= 1 && day <= 20)) {
        cout << "Gemini" << endl;
    } else if ((month == "June" && day >= 21 && day <= 30) || (month == "July" && day >= 1 && day <= 22)) {
        cout << "Cancer" << endl;
    } else if ((month == "July" && day >= 23 && day <= 31) || (month == "August" && day >= 1 && day <= 22)) {
        cout << "Leo" << endl;
    } else if ((month == "August" && day >= 23 && day <= 31) || (month == "September" && day >= 1 && day <= 22)) {
        cout << "Virgo" << endl;
    } else if ((month == "September" && day >= 23 && day <= 30) || (month == "October" && day >= 1 && day <= 22)) {
        cout << "Libra" << endl;
    } else if ((month == "October" && day >= 22 && day <= 31) || (month == "November" && day >= 1 && day <= 21)) {
        cout << "Scorpio" << endl;
    } else if ((month == "November" && day >= 22 && day <= 30) || (month == "December" && day >= 1 && day <= 21)) {
        cout << "Sagittarius" << endl;
    } else if ((month == "December" && day >= 22 && day <= 31) || (month == "January" && day >= 1 && day <= 19)) {
        cout << "Capricon" << endl;
    } else if ((month == "January" && day >= 20 && day <= 31) || (month == "Febraury" && day >= 1 && day <= 18)) {
        cout << "Aries" << endl;
    } else if ((month == "Febraury" && day >= 19 && day <= 28) || (month == "March" && day >= 1 && day <= 20)) {
        cout << "Aries" << endl;
    }
}