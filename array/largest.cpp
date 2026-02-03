#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int secondLargest(vector<int> &arr,int n){
    int largest=arr[0];
    int sLargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            sLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>sLargest){
            sLargest=arr[i];
        }
    }
    return sLargest;
}

int main() {
    vector<int> vec = {1, 2, 5, 9, 7, 8};
    cout <<"The largest element in the given vec:"<< largestElement(vec, vec.size());
    cout<<endl;
    cout << "The secondLargest element in the given vec:"<<secondLargest(vec, vec.size());
}
