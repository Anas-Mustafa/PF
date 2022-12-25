#include <iostream>
using namespace std;

int main() {
    int bits;
    
    cout << "Enter Bits: ";
    cin >> bits;

    int bytes = bits / 8;
    int kilobytes = bytes / 1024;
    int megabytes = kilobytes / 1024;

    cout << bits << " Bits = " << bytes << " Bytes" << endl;
    cout << bits << " Bits = " << kilobytes << " Kilobytes" << endl;
    cout << bits << " Bits = " << megabytes << " Megabytes" << endl;

    return 0;
}
