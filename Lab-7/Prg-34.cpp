// 34. C++ Program to Find Transpose of a Matrix:
 
 
#include <iostream>
using namespace std;

void transposeMatrix(int mat[][3], int size) {
    int transposed[3][3];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transposed[i][j] = mat[j][i];
        }
    }

    cout << "Transpose of the matrix: \n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3;

    transposeMatrix(mat, size);
    return 0;
}

