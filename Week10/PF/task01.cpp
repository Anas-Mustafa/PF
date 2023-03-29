#include <iostream>
using namespace std;

int countCharacter(char character, int numberOfWords);

string words[20];

int main() {
    int numberOfWords;
    char character;
    cout << "Number of Words: ";
    cin >> numberOfWords;

    for (int i = 0; i < numberOfWords; i++) {
        cout << "Word: ";
        cin >> words[i];
    }
    cout << "Enter Character to Search: ";
    cin >> character;

    int characterCount = countCharacter(character, numberOfWords);
    cout << "Character " << character << " Count: " << characterCount << endl;

    return 0;
}

int countCharacter(char character, int numberOfWords) {
    string word;
    int characterCount = 0;
    for (int i = 0; i < numberOfWords; i++) {
        word = words[i];
        for (int j = 0; word[j] != '\0'; j++) {
            if (word[j] == character) {
                characterCount++;
            }
        }
    }
    return characterCount;
}