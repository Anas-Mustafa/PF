#include <iostream>
using namespace std;

int main() {
    int length;
    int width;
    int area;

    cout << "Length : ";
    cin >> length;
    cout << "Width  : ";
    cin >> width;
    area = length * width;
    cout << "Area   : " << area << endl;

    return 0;
}