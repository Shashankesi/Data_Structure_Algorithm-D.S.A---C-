#include <iostream>
#include <vector>
using namespace std;

void spiralMatrix(vector<vector<int>> &matrix, int n, int m) {
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol) {
        // top row
        for (int j = scol; j <= ecol; j++) {
            cout << matrix[srow][j] << " ";
        }
        // right column
        for (int i = srow + 1; i <= erow; i++) {
            cout << matrix[i][ecol] << " ";
        }
        // bottom row and edge case also to print duplicate element 
        for (int j = ecol - 1; j >= scol; j--) {
            if (erow == srow) break;
            cout << matrix[erow][j] << " ";
        }
        // left column and edge case to print duplicate element
        for (int i = erow - 1; i >= srow + 1; i--) {
            if (scol == ecol) break;
            cout << matrix[i][scol] << " ";
        }
        srow++; scol++;
        erow--; ecol--;
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},   
        {5, 6, 7, 8},   
        {9, 10, 11, 12},
        {13, 14, 15, 16}    
    };

    spiralMatrix(matrix, 4, 4);
    return 0;
}
