#include <iostream>
using namespace std;

int arrayAverage(int array[], int size);
string printArray(int array[], int size);

int main() {
    int size = 4;
    int numbers[size] = { 1,2,3,4 };
    int average = arrayAverage(numbers, size);
    cout << "Average of Array " << printArray(numbers, size) << " is " << average << endl;
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

int arrayAverage(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    return sum / size;
}