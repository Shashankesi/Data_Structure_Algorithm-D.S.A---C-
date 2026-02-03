#include<iostream>
using namespace std;

// now for the partition of the array
int partition(int arr[], int si, int ei){
    int i= si-1;
    int pivot=arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);
    return i;
}

void quickSort(int arr[], int si, int ei){
    if(si>=ei) return;

    int pivotIDX=partition(arr,si,ei);
    quickSort(arr,si, pivotIDX-1);
    quickSort(arr, pivotIDX+1,ei);
}

int main(){
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;

}