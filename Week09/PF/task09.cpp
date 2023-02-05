#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Text: ";
    getline(cin, text);
    int count = text.length();

    for (int i = count - 1; i >= 0; i--) {
        cout << text[i];
    }
    cout << endl;

    return 0;
}