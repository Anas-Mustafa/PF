#include <iostream>
using namespace std;

int main() {
    int range;
    cout << "Enter Range: ";
    cin >> range;
    int sum = 0;
    for (int i = 1; i <= range; i++) {
        sum += i;
        cout << i << " ";
    }
    cout << endl;
    cout << "Sum of these natural numbers: " << sum << endl;
    return 0;
}