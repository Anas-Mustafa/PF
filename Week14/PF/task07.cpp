#include <iostream>
using namespace std;

void rotateLeft(int array[], int size, int rotateIndex);
void rotateLeftOnce(int array[], int size);
string printArray(int array[], int size);

int main() {
    int arraySize = 9;
    int array[] = { 1,2,3,4,5,6,7,8,9 };
    cout << "---= Before Rotating =---" << endl;
    cout << printArray(array, arraySize) << endl;
    cout << endl;
    rotateLeft(array, arraySize, 10);
    cout << "---= After Rotating =---" << endl;
    cout << printArray(array, arraySize) << endl;
}

void rotateLeft(int array[], int size, int rotateIndex) {
    for (int i = 0; i < rotateIndex % size; i++) {
        rotateLeftOnce(array, size);
    }
}

void rotateLeftOnce(int array[], int size) {
    int temp = array[0];
    for (int i = 0; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    array[size - 1] = temp;
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