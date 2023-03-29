#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Text: ";
    getline(cin, text);
    for (int i = text.length() - 1; i >= 0; i--) {
        if (text[i] == ' ' || i == 0) {
            if (i == 0) {
                cout << text[i];
            }
            for (int j = i + 1; j < text.length() && text[j] != ' '; j++) {
                cout << text[j];
            }
            cout << ' ';
        }
    }

    return 0;
}