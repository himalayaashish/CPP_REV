// 37. C++ Program to Check Sparse Matrix:
 
 
#include <iostream>
using namespace std;

bool isSparseMatrix(int mat[][3], int rows, int cols) {
    int countZero = 0;
    int totalElements = rows * cols;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 0) {
                countZero++;
            }
        }
    }

    return countZero > (totalElements / 2);
}

int main() {
    int mat[3][3] = {{1, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int rows = 3, cols = 3;

    if (isSparseMatrix(mat, rows, cols)) {
        cout << "The matrix is a sparse matrix." << endl;
    } else {
        cout << "The matrix is not a sparse matrix." << endl;
    }
    return 0;
}

