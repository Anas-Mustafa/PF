#include <iostream>
using namespace std;

int main() {
    string text;
    char currentCharacter;
    int vowelsCount = 0;
    cout << "Text: ";
    getline(cin, text);
    int length = text.length();

    for (int i = 0; i < length - 1; i++) {
        currentCharacter = text[i];
        if (currentCharacter == 'a' || currentCharacter == 'e' || currentCharacter == 'i' || currentCharacter == 'o' || currentCharacter == 'u') {
            vowelsCount++;
        }
    }

    cout << "Number Of Vowels: " << vowelsCount << endl;

    return 0;
}