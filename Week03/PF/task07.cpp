#include <iostream>
using namespace std;

int main() {
    int megabytes;
    
    cout << "Enter Megabytes: ";
    cin >> megabytes;

    int bits = megabytes * 1024 * 1024 * 8;

    cout << megabytes << " Megabytes = " << bits << " Bits" << endl;

    return 0;
}
