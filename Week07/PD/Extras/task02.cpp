#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
        cout << i << " ";
    }
    cout << endl;
    cout << "Sum of first ten natural numbers: " << sum << endl;
    return 0;
}