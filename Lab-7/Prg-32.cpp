// 32. C++ Program to Find Lower Triangular Matrix:
 
 
#include <iostream>
using namespace std;

void lowerTriangular(int mat[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i < j) {
                mat[i][j] = 0;
            }
        }
    }
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3;

    lowerTriangular(mat, size);

    cout << "Lower triangular matrix: \n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}