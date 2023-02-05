#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Text: ";
    getline(cin, text);
    int length = text.length();

    for (int i = 0; i < length; i++) {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
            cout << "";
        } else {
            cout << text[i];
        }
    }
    cout << endl;

    return 0;
}