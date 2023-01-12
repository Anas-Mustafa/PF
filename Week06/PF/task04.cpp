#include <iostream>
using namespace std;

string checkSpeed(float speed);

int main() {
    float speed;

    cout << "Speed: ";
    cin >> speed;

    string speedStatus = checkSpeed(speed);
    cout << "Your speed is " << speedStatus << endl;

    return 0;
}

string checkSpeed(float speed) {
    string speedStatus;
    if (speed <= 10)
        speedStatus = "slow";
    else if (speed <= 50)
        speedStatus = "average";
    else if (speed <= 150)
        speedStatus = "fast";
    else if (speed <= 1000)
        speedStatus = "ultra fast";
    else
        speedStatus = "extremely fast";

    return speedStatus;
}