#include <iostream>
using namespace std;

string printArray(int array[], int size);
void mergeArray(int arrayOne[], int arrayTwo[], int mergedArray[], int arrayOneSize, int arrayTwoSize);

int main() {
    int arrayOne[] = { 1,2,3,4,5,6 };
    int arrayTwo[] = { 7,8,9 };
    int arrayOneSize = sizeof(arrayOne) / sizeof(int);
    int arrayTwoSize = sizeof(arrayTwo) / sizeof(int);

    int arrayThreeSize = arrayOneSize + arrayTwoSize;
    int arrayThree[arrayThreeSize];
    mergeArray(arrayOne, arrayTwo, arrayThree, arrayOneSize, arrayTwoSize);

    cout << printArray(arrayOne, arrayOneSize) << " + " << printArray(arrayTwo, arrayTwoSize) << " = " << printArray(arrayThree, arrayThreeSize) << endl;
}

string printArray(int array[], int size) {
    string arrayString;
    arrayString += "[ ";
    for (int i = 0; i < size; i++) {
        arrayString += to_string(array[i]);
        if (i == size - 1) {
            arrayString += " ]";
        } else {
            arrayString += ", ";
        }
    }
    return arrayString;
}

void mergeArray(int arrayOne[], int arrayTwo[], int mergedArray[], int arrayOneSize, int arrayTwoSize) {
    int index = 0;
    for (int i = 0; i < arrayOneSize; i++) {
        mergedArray[index] = arrayOne[i];
        index++;
    }
    for (int i = 0; i < arrayTwoSize; i++) {
        mergedArray[index] = arrayTwo[i];
        index++;
    }
}
