#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &vec) {
    int n = vec.size();
    for (int i = 1; i < n; i++) {
        int curr = vec[i];
        int prev = i - 1;

        while (prev >= 0 && vec[prev] > curr) {
            vec[prev + 1] = vec[prev]; 
            prev--;
        }
        vec[prev + 1] = curr; 
    }
}

int main() {
    vector<int> vec = {4, 1, 5, 2, 3};
    insertionSort(vec);

    cout << "Sorted array using Insertion Sort: "; 
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl; 
}
