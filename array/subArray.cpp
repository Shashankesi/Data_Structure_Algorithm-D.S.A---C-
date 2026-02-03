#include <bits/stdc++.h>
using namespace std;

void subArray(vector<int> &arr, int n) {
    cout<<"The sub array is"<<endl;
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            // cout << "Start: " << arr[start] << ", End: " << arr[end] << endl;
            for(int i=start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" , ";
        }
        cout<<endl;
    }
}

int main() {
    vector<int>arr = {1, 2, 3, 4, 5};  
    int n=arr.size();
    subArray(arr, n);
    return 0;
}
