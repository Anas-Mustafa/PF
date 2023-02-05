#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Text: ";
    getline(cin, text);
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == 'a') {
            cout << 'b';
        } else if (text[i] == 'b') {
            cout << 'c';
        } else if (text[i] == 'c') {
            cout << 'd';
        } else if (text[i] == 'd') {
            cout << 'e';
        } else if (text[i] == 'e') {
            cout << 'f';
        } else if (text[i] == 'f') {
            cout << 'g';
        } else if (text[i] == 'g') {
            cout << 'h';
        } else if (text[i] == 'h') {
            cout << 'i';
        } else if (text[i] == 'i') {
            cout << 'j';
        } else if (text[i] == 'j') {
            cout << 'k';
        } else if (text[i] == 'k') {
            cout << 'l';
        } else if (text[i] == 'l') {
            cout << 'm';
        } else if (text[i] == 'm') {
            cout << 'n';
        } else if (text[i] == 'n') {
            cout << 'o';
        } else if (text[i] == 'o') {
            cout << 'p';
        } else if (text[i] == 'p') {
            cout << 'q';
        } else if (text[i] == 'q') {
            cout << 'r';
        } else if (text[i] == 'r') {
            cout << 's';
        } else if (text[i] == 's') {
            cout << 't';
        } else if (text[i] == 't') {
            cout << 'u';
        } else if (text[i] == 'u') {
            cout << 'v';
        } else if (text[i] == 'v') {
            cout << 'w';
        } else if (text[i] == 'w') {
            cout << 'x';
        } else if (text[i] == 'x') {
            cout << 'y';
        } else if (text[i] == 'y') {
            cout << 'z';
        } else if (text[i] == 'z') {
            cout << 'a';
        } else {
            cout << text[i];
        }
    }
    cout << endl;
}