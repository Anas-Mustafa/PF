#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Text: ";
    getline(cin, text);
    int count = text.length();

    if (count % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}