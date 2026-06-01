#include <iostream>
using namespace std;

int main() {
    int* arr[5];

    // Create rows of different sizes
    for(int i = 0; i < 5; i++) {
        arr[i] = new int[i + 1];
    }

    // Store values
    int num = 1;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            arr[i][j] = num++;
        }
    }

    // Print jagged array
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

