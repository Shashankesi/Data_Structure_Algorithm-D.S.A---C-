/*create an integer array  containing some values
passes the array to a helper method that attempt to wipe the data by asssigning arr=new int[3];
prints the arrat in the main() method after the helper method call to show that the original data is still present 
create a second helper method that correctly wipes the data by setting each array element to 0
print the array to verify that the data has been erased
*/ 
#include <iostream>
using namespace std;

// Incorrect way to wipe array
void wipeArray(int arr[]) {
    arr = new int[3];   // Creates a new array locally
}

// Correct way to wipe array
void eraseData(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}

// Print array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Original Array: ";
    printArray(arr, 5);

    wipeArray(arr);

    cout << "After wipeArray(): ";
    printArray(arr, 5);

    eraseData(arr, 5);

    cout << "After eraseData(): ";
    printArray(arr, 5);

    return 0;
}