#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted halves of an array
void merge(int arr[], int si, int mid, int ei) {
    vector<int> temp; // temporary array to store merged elements
    int i = si;       // starting index for left half
    int j = mid + 1;  // starting index for right half

    // Merge elements from both halves into temp[] in sorted order
    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy any remaining elements from left half (if any)
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy any remaining elements from right half (if any)
    while (j <= ei) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted elements back to the original array
    for (int idx = si, x = 0; idx <= ei; idx++, x++) {
        arr[idx] = temp[x];
    }
}

// Recursive merge sort function
void mergeSort(int arr[], int si, int ei) {
    // Base case: if array has one or zero elements, it's already sorted
    if (si >= ei)
        return;

    int mid = si + (ei - si) / 2;

    // Recursively sort the left half
    mergeSort(arr, si, mid);

    // Recursively sort the right half
    mergeSort(arr, mid + 1, ei);

    // Merge the two sorted halves
    merge(arr, si, mid, ei);
}

int main() {
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
