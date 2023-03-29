#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int number;
    float decimal;
    char character;
    string name;
    int counter = 0;

    fstream file;
    file.open("example.txt", ios::in);
    while (!file.eof()) {
        getline(file, name);
        counter++;
    }
    cout << "Counter: " << counter << endl;
}