#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Enter a String: ";
    getline(cin, text);
    if (text.length() % 2 == 0) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}