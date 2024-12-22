// 36. C++ Program to Check Identity Matrix:
 
 
#include <iostream>
using namespace std;

bool isIdentityMatrix(int mat[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int mat[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int size = 3;

    if (isIdentityMatrix(mat, size)) {
        cout << "The matrix is an identity matrix." << endl;
    } else {
        cout << "The matrix is not an identity matrix." << endl;
    }
    return 0;
}