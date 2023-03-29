#include <iostream>
using namespace std;

int countIdenticalRows();

int matrix[4][3] = {
    {0, 0, 0},
    {0, 1, 2},
    {0, 0, 0},
    {2, 1, 0}
};

int main() {
    int rows = countIdenticalRows();
    cout << "Identical Rows: " << rows << endl;
}

int countIdenticalRows() {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (matrix[i][0] == matrix[j][0] && matrix[i][1] == matrix[j][1] && matrix[i][2] == matrix[j][2]) {
                count++;
                break;
            }
        }
    }
    return count;
}