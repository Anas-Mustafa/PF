#include <iostream>
using namespace std;

int main() {
    string name;
    char character;
    cout << "Name: ";
    getline(cin, name);
    int length = name.length();
    cout << "Character To Match: ";
    cin >> character;

    if (name[length - 1] == character) {
        cout << "Last Character Matches Your Character" << endl;
    } else {
        cout << "Last Character Does Not Matches Your Character" << endl;
    }
}