// 33. C++ Program to Find Sum of Upper Triangular Matrix:
 
 
#include <iostream>
using namespace std;

int sumUpperTriangular(int mat[][3], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {  // Only upper triangular part
            sum += mat[i][j];
        }
    }
    return sum;
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3;

    cout << "Sum of upper triangular matrix: " << sumUpperTriangular(mat, size) << endl;
    return 0;
}

