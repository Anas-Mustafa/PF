#include <iostream>
using namespace std;

int main() {
    int h, x, y;
    cout << "h: ";
    cin >> h;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    if ((x >= 0 && x <= 3 * h) && (y >= 0 && y <= h) || ((x >= h && x <= 2 * h) && (y >= h && y <= 4 * h))) {
        if (x % h == 0 && y % h == 0)
            cout << "Border" << endl;
        else
            cout << "Inside" << endl;
    } else {
        cout << "Outside" << endl;
    }
}