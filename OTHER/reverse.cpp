#include <bits/stdc++.h>
using namespace std;

// Function to reverse the array
void reverse(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while (start <= end) {
        swap(arr[start], arr[end]); 
        start++;
        end--;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<< " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {5, 6, 9, 10, 4, 6};  
    int arr[5] = {7, 3, 9, 1, 0}; 

    reverse(arr,5);
    printArray(arr,5);

    reverse(arr, 6);
    printArray(arr, 6);

    return 0;
}
