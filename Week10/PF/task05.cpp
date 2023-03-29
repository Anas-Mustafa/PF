#include <iostream>
using namespace std;

int main() {
    int numbersCount;
    cout << "N: ";
    cin >> numbersCount;
    int numbers[numbersCount];
    int index = 0, sum = 0, product = 1;

    for (int i = 0; i < numbersCount; i++) {
        cout << "Number: ";
        cin >> numbers[i];
    }

    for (int i = 0; i < numbersCount; i++) {
        product *= numbers[i];
        index++;
        if (index == 3) {
            sum += product;
            product = 1;
            index = 0;
        }
    }

    cout << "Total Volume: " << sum << endl;

    return 0;
}