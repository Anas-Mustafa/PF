#include <iostream>
using namespace std;

int main() {
    int arraySize;
    cout << "N: ";
    cin >> arraySize;
    string colors[arraySize];
    int timeColoring = 0, timeSwitching = 0;

    for (int i = 0; i < arraySize; i++) {
        cout << "Color at Index " << i << ": ";
        cin >> colors[i];
    }
    string lastColor = colors[0];
    for (int i = 0; i < arraySize; i++) {
        if (lastColor != colors[i]) {
            timeSwitching += 1;
        }
        timeColoring += 2;
        lastColor = colors[i];
    }

    int totalTime = timeColoring + timeSwitching;
    cout << "Total Time Taken: " << totalTime << endl;

    return 0;
}