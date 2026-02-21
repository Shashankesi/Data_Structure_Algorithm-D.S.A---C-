#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//heapify algo
void heapify(vector<int>& arr, int i, int n){
    int left = 2*i + 1;
    int right = 2*i + 2;
    int maxI = i;

    // check left child
    if(left < n && arr[left] > arr[maxI]){
        maxI = left;
    }

    // check right child
    if(right < n && arr[right] > arr[maxI]){
        maxI = right;
    }

    // swap if needed
    if(maxI != i){
        swap(arr[i], arr[maxI]);
        heapify(arr, maxI, n);
    }
}

int main(){
    vector<int> arr = {51,53,54,55,52,50};
    int n = arr.size();

    // Build max heap
    for(int i = n/2 - 1; i >= 0; i--){
        heapify(arr, i, n);
    }

    // Print full heap
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
