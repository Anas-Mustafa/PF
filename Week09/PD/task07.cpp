#include <iostream>
using namespace std;

int main() {
    string textOne, textTwo;
    int commonLetters = 0;
    cout << "String One: ";
    getline(cin, textOne);
    cout << "String Two: ";
    getline(cin, textTwo);

    for (int i = 0; textOne[i] != '\0'; i++) {
        for (int j = 0; textTwo[j] != '\0'; j++) {
            if (textOne[i] == textTwo[j]) {
                commonLetters++;
                textTwo[j] = 24;
                break;
            }
        }
    }

    cout << "Common Letters: " << commonLetters << endl;

    return 0;
}