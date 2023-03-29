#include <iostream>
using namespace std;

int main() {
    int number = 10;
    int *ptr = &number;
    cout << "Address Of Pointer: " << ptr << endl;
    cout << "Value At Address: " << *ptr << endl;
}