// 24. C++ Program to Perform Scalar Matrix Multiplication:
 
 
#include <iostream>
using namespace std;

void scalarMultiply(int mat[][3], int scalar, int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat[i][j] * scalar;
        }
    }
}

int main() {
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int scalar = 3;
    int result[2][3];
    int rows = 2, cols = 3;

    scalarMultiply(mat, scalar, result, rows, cols);

    cout << "Matrix after scalar multiplication: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}