// 22. C++ Program to Add Two Matrices:
#include <iostream>
using namespace std;

void addMatrices(int mat1[][3], int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[2][3] = {{6, 5, 4}, {3, 2, 1}};
    int result[2][3];
    int rows = 2, cols = 3;

    addMatrices(mat1, mat2, result, rows, cols);

    cout << "Sum of matrices: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}