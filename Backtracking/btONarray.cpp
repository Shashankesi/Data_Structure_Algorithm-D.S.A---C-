#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void changeArr(int arr[], int n, int i){
    // Base case
    if(i == n){
        printArr(arr, n);
        return;
    }

    // assign value
    arr[i] = i + 1;
    changeArr(arr, n, i + 1);

    // backtracking step
    arr[i] -= 2;
}

int main(){
    int n = 5;
    int arr[5] = {0};   // properly initialize all 5 elements to 0
    changeArr(arr, n, 0);
    printArr(arr, n);
}
