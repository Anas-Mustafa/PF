#include <iostream>
using namespace std;

string decideActivity(string temperature, string humidity);

int main() {
    string temperature, humidity;
    cout << "Temperature (warm | cold): ";
    cin >> temperature;
    cout << "Humidity (dry | humid): ";
    cin >> humidity;

    string activity = decideActivity(temperature, humidity);
    cout << activity << endl;

    return 0;
}

string decideActivity(string temperature, string humidity) {
    string activity = "Invalid Activity";
    if (temperature == "warm") {
        if (humidity == "dry") {
            activity = "Play Tennis";
        } else if (humidity == "humid") {
            activity = "Swim";
        }
    } else if (temperature == "cold") {
        if (humidity == "dry") {
            activity = "Play basketball";
        } else if (humidity == "humid") {
            activity = "Watch TV";
        }
    }

    return activity;
}