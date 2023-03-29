#include <iostream>
using namespace std;

bool isSparse(int matrix[3][3]);

int main() {
    int matrix[3][3] = {
        {1,0,0},
        {4,0,0},
        {7,0,9}
    };
    cout << "Given Matrix is " << ((isSparse(matrix)) ? "" : "Not ") << "Sparse" << endl;
}

bool isSparse(int matrix[3][3]) {
    int zeroCount = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    return (zeroCount > (3 * 3) / 2);
}