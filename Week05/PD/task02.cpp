#include <iostream>
#include <cmath>
using namespace std;

float calculatePyramidVolume(float length, float width, float height, string units);
int main() {
    float length, width, height;
    string units;

    cout << "Length (in meters): ";
    cin >> length;
    cout << "Width (in meters):  ";
    cin >> width;
    cout << "Height (in meters): ";
    cin >> height;
    cout << "Units (milimeters | centimeters | meters | kilometers): ";
    cin >> units;

    float pyramidVolume = calculatePyramidVolume(length, width, height, units);

    cout << "Pyramid Volume: " << pyramidVolume << " cubic " << units;
}

float calculatePyramidVolume(float length, float width, float height, string units) {
    float pyramidVolume = (length * width * height) / 3;

    if (units == "milimeters") {
        pyramidVolume = pyramidVolume * pow(1000, 3);
    }
    if (units == "centimeters") {
        pyramidVolume = pyramidVolume * pow(100, 3);
    }
    if (units == "kilometers") {
        pyramidVolume = pyramidVolume / pow(1000, 3);
    }

    return pyramidVolume;
}