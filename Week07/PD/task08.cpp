#include <iostream>
using namespace std;

int main() {
    int cargoCount, cargoWeight;
    float totalWeight = 0, totalPricePerTon = 0;
    int truckTransport = 0, trainTransport = 0, minibusTransport = 0;
    cout << "Cargo Count: ";
    cin >> cargoCount;

    for (int i = 0; i < cargoCount; i++) {
        cout << "Cargo Weight ( in tons ): ";
        cin >> cargoWeight;

        if (cargoWeight <= 3) {
            totalPricePerTon += cargoWeight * 200;
            minibusTransport += cargoWeight;
        } else if (cargoWeight <= 11) {
            totalPricePerTon += cargoWeight * 175;
            truckTransport += cargoWeight;
        } else {
            totalPricePerTon += cargoWeight * 120;
            trainTransport += cargoWeight;
        }

        totalWeight += cargoWeight;
    }

    float percentageMinibusTransport = minibusTransport * 100.0 / totalWeight;
    float percentageTruckTransport = truckTransport * 100.0 / totalWeight;
    float percentageTrainTransport = trainTransport * 100.0 / totalWeight;
    float averagePricePerTon = totalPricePerTon / totalWeight;

    cout << "Average Price Per Ton: " << averagePricePerTon << endl;
    cout << "Percentage Minibus Transport: " << percentageMinibusTransport << "%" << endl;
    cout << "Percentage Truck Transport: " << percentageTruckTransport << "%" << endl;
    cout << "Percentage Train Transport: " << percentageTrainTransport << "%" << endl;
}