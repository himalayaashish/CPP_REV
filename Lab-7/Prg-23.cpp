// 23. C++ Program to Subtract Two Matrices:
 
 
#include <iostream>
using namespace std;

void subtractMatrices(int mat1[][3], int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

int main() {
    int mat1[2][3] = {{5, 6, 7}, {8, 9, 10}};
    int mat2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int result[2][3];
    int rows = 2, cols = 3;

    subtractMatrices(mat1, mat2, result, rows, cols);

    cout << "Difference of matrices: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}