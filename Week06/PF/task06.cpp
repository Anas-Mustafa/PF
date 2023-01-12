#include <iostream>
using namespace std;

float calculateLowestPrice(int distance, string time);

int main() {
    int distance;
    string time;

    cout << "Distance: ";
    cin >> distance;
    cout << "Time(day | night): ";
    cin >> time;

    float lowestPrice = calculateLowestPrice(distance, time);
    cout << "Lowest Price: " << lowestPrice << endl;

    return 0;
}

float calculateLowestPrice(int distance, string time) {
    float startingFee = 0;
    float fareRate;
    if (distance < 20) {
        startingFee = 0.70;
        if (time == "day") {
            fareRate = 0.79;
        } else {
            fareRate = 0.90;
        }
    } else if (distance < 100) {
        fareRate = 0.09;
    } else {
        fareRate = 0.06;
    }

    return startingFee + (distance * fareRate);
}
