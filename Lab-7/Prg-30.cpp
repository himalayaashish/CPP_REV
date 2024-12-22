// 30. C++ Program to Interchange Diagonals of a Matrix:
 
 
#include <iostream>
using namespace std;

void interchangeDiagonals(int mat[][3], int size) {
    for (int i = 0; i < size; i++) {
        swap(mat[i][i], mat[i][size - i - 1]);
    }
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3;

    interchangeDiagonals(mat, size);

    cout << "Matrix after interchanging diagonals: \n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}