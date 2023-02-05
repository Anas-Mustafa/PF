#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Text: ";
    getline(cin, text);

    cout << "Modified Text: " << "something " << text << endl;

    return 0;
}