#include<iostream>
using namespace std;

int main() {
    int arr[6][6];
    int a = 0, b = 1, next;
    int n = 5;

    // Fill array with Fibonacci numbers
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = a;
            next = a + b;
            a = b;
            b = next;
        }
    }

    cout << "Fibonacci Series:\n";

    // Print array in matrix form
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}