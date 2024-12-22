// 28. C++ Program to Find Sum of Minor Diagonal Elements of a Matrix:
 
 
#include <iostream>
using namespace std;

int sumMinorDiagonal(int mat[][3], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += mat[i][size - i - 1];
    }
    return sum;
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3;

    cout << "Sum of minor diagonal: " << sumMinorDiagonal(mat, size) << endl;
    return 0;
}

