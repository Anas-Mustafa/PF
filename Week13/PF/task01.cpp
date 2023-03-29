#include <iostream>
using namespace std;

int main() {
    bool isIdentity = true;
    int matrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (row == col) {
                if (matrix[row][col] != 1) {
                    isIdentity = false;
                    break;
                }
            } else if (matrix[row][col] != 0) {
                isIdentity = false;
                break;
            }
        }
    }

    if (isIdentity) {
        cout << "Given Matrix is Identity Matrix" << endl;
    } else {
        cout << "Given Matrix is not Identity Matrix" << endl;
    }
}