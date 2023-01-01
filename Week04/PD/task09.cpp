#include <iostream>
using namespace std;

void Reverse(string userValue);

int main() {
    string userInput;
    cout << "Enter 'true' or 'false': ";
    cin >> userInput;

    Reverse(userInput);

    return 0;
}

void Reverse(string userValue) {
    if (userValue == "true") {
        cout << "Reversed Value: false";
    }
    if (userValue == "false") {
        cout << "Reversed Value: true";
    }
}