#include <iostream>
using namespace std;

// Function to compute the transpose
void transposeMatrix(int matrix[][4], int n, int m, int transpose[][4]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Function to print any 4x4 matrix
void printArray(int matrix[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},   
        {5, 6, 7, 8},   
        {9, 10, 11, 12},
        {13, 14, 15, 16}    
    };

    int transpose[4][4]; 

    transposeMatrix(matrix, 4, 4, transpose);

    cout << "Original Matrix:" << endl;
    printArray(matrix, 4, 4);

    cout << "\nTranspose Matrix:" << endl;
    printArray(transpose, 4, 4);

    return 0;
}
