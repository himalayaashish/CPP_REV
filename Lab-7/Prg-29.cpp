// 29. C++ Program to Find Sum of Each Row and Column of a Matrix:
 
 
#include <iostream>
using namespace std;

void sumRowColumn(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += mat[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << rowSum << endl;
    }

    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += mat[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << colSum << endl;
    }
}

int main() {
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2, cols = 3;

    sumRowColumn(mat, rows, cols);
    return 0;
}

