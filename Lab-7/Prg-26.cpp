// 26. C++ Program to Check Whether Two Matrices are Equal or Not:
 
 
#include <iostream>
using namespace std;

bool areMatricesEqual(int mat1[][3], int mat2[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2, cols = 3;

    if (areMatricesEqual(mat1, mat2, rows, cols)) {
        cout << "Matrices are equal." << endl;
    } else {
        cout << "Matrices are not equal." << endl;
    }
    return 0;
}

