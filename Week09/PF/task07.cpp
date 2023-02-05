#include <iostream>
using namespace std;

int main() {
    string sentence;
    cout << "Text: ";
    getline(cin, sentence);

    for (int i = 0; sentence[i] != '\0'; i++) {
        cout << "\"" << sentence[i] << "\"" << " - " << i << endl;
    }

    return 0;
}