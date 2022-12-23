#include <iostream>
using namespace std;

int main() {
    int initialVelocity;
    int acceleration;
    int time;
    cout << "Enter Initial Velocity: ";
    cin >> initialVelocity;
    cout << "Enter Acceleration: ";
    cin >> acceleration;
    cout << "Enter Time: ";
    cin >> time;
    
    int finalVelocity = initialVelocity + acceleration * time;
    cout << "Final Velocity: " << finalVelocity;

    return 0;
}    
