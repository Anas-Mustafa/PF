#include <iostream>
using namespace std;

int main() {
    string sentence;
    int counter = 0;
    cout << "Text: ";
    getline(cin, sentence);

    for (int i = 0; sentence[i] != '\0'; i++) {
        counter++;
    }

    cout << "Number of Characters: " << counter << endl;
    return 0;
}