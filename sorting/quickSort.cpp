/*
sort a given set of element using the quick sort method and determine the time required to sort
the element repeat the experiment for different values of n, the no of element  in the list to be 
sorted. The element can be read from a file or can be genrate using the random number 
Step 1:- Genrate random aray of size n
Step 2:-Sort them using quick sort
Step 3:-Measure and print the time taken for sorting
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    srand(time(0));  
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;   
    }
    clock_t start = clock();
    quickSort(arr, 0, n - 1);
    clock_t end = clock();

    double time_taken = double(end - start) / CLOCKS_PER_SEC;

    cout << "Time taken to sort " << n << " elements: "
         << time_taken << " seconds" << endl;

    delete[] arr;
    return 0;
}
