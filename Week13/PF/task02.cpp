#include <iostream>
using namespace std;

bool hitDetection(string location);
int getRowNumber(char rowChar);
int getColNumber(char colChar);

char board[5][5] = {
    {'.', '.', '.', '*', '*'},
    {'.', '*', '.', '.', '.'},
    {'.', '*', '.', '.', '.'},
    {'.', '*', '.', '.', '.'},
    {'.', '.', '*', '*', '.'}
};

int main() {
    string location;
    cout << "Enter Spot To Fire: ";
    cin >> location;

    if (hitDetection(location)) {
        cout << "BOOM!!!" << endl;
    } else {
        cout << "Splash!!!" << endl;
    }

    return 0;
}

bool hitDetection(string location) {
    int row = getRowNumber(location[0]);
    int col = getColNumber(location[1]);
    return (board[row][col] == '*');
}
int getRowNumber(char rowChar) {
    return rowChar - 'A';
}

int getColNumber(char colChar) {
    return colChar - '0';
}