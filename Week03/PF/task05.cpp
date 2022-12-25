#include <iostream>
using namespace std;

int main() {
    float charge;
    int time;
    float current;

    cout << "Charge  : ";
    cin >> charge;
    cout << "Time    : ";
    cin >> time;
    current = charge / time;
    cout << "Current : " << current << endl;

    return 0;
}