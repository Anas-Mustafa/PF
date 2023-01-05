#include <iostream>
#include <cmath>
using namespace std;

float calculateHeight(float baseLength, float degreeAngle);

int main() {
    float baseLength, degreeAngle, height;

    while(true) {
	cout << "Base Length:  ";
	cin >> baseLength;
	cout << "Degree Angle: ";
	cin >> degreeAngle;

	height = calculateHeight(baseLength, degreeAngle);
	cout << "Height: " << height << endl << endl;
    }

    return 0;
}

float calculateHeight(float baseLength, float degreeAngle) {
    radian = 57.2958;
    float radianAngle = degreeAngle / radian;
    float height = tan(radianAngle) * baseLength;
    return height;
}