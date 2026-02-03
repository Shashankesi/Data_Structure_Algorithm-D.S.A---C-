#include <iostream>
using namespace std;

void alternate(int arr[], int n) {
    int start = 0;
    while (start + 1 < n) {
        swap(arr[start], arr[start + 1]);
        start += 2;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[6] = {3, 4, 5, 6, 7, 8};
    int arr2[4] = {5, 2, 6, 8};

    int arr3[5]={4,1,2,4,2};
    int unique=0;
    int n= sizeof(arr3)/sizeof(arr3[0]);
    for(int i=0;i<n;i++){
        unique ^= arr3[i];
    }
    
    cout<<"the unique element in the given array is: "<<unique;

    cout<<endl;

    cout<<"Alternate swap of array1:";
    alternate(arr1, 6);
    printArray(arr1, 6);
    cout<<endl;

    cout<<"Alternate swap of array2:";

    alternate(arr2, 4);
    printArray(arr2, 4);
    
    cout<<endl;
    return 0;
}
