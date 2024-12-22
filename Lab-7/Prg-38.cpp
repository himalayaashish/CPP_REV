// 38. C++ Program to Check Symmetric Matrix:

 
 
#include <iostream>
using namespace std;

bool isSymmetric(int mat[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (mat[i][j] != mat[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
    int size = 3;

    if (isSymmetric(mat, size)) {
        cout << "The matrix is symmetric." << endl;
    } else {
        cout << "The matrix is not symmetric." << endl;
    }
    return 0;
}