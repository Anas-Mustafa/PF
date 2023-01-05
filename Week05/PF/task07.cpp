#include <iostream>
using namespace std;

int main() {
    int poolCapacity, pipeOneFlowRate, pipeTwoFlowRate;
    float hours;

    while(true) {
        cout << "Volume of Pool (in liters): ";
        cin >> poolCapacity;
        cout << "Flow Rate of First Pipe (per hour):  ";
        cin >> pipeOneFlowRate;
        cout << "Flow Rate of Second Pipe (per hour): "; 
        cin >> pipeTwoFlowRate;
        cout << "Time the worker was away (in hours): ";
        cin >> hours;

        float totalWaterVolume = (pipeOneFlowRate + pipeTwoFlowRate) * hours;
        if (totalWaterVolume > poolCapacity) {
            int overflowWater = totalWaterVolume - poolCapacity;
            
            cout << "For " << hours << " hours the pool overflows with " << overflowWater << " liters." << endl << endl;
        }
        if (totalWaterVolume <= poolCapacity) {
            int percentagePoolFilled = totalWaterVolume / poolCapacity * 100;
            int pipeOneContribution = (pipeOneFlowRate * hours) / totalWaterVolume * 100;
            int pipeTwoContribution = 100 - pipeOneContribution;

            cout << "The pool is " << percentagePoolFilled << "% full." << endl;
            cout << "Pipe 1: " << pipeOneContribution << "%." << endl;
            cout << "Pipe 2: " << pipeTwoContribution << "%." << endl << endl;
        }
    }

    return 0;
}