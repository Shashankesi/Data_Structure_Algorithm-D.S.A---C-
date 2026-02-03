#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (vec[j] < vec[minIdx]) {
                minIdx = j;
            }
        }
        swap(vec[i], vec[minIdx]);
    }
}

int main() {
    vector<int> vec = {4, 1, 5, 2, 3};
    selectionSort(vec);

    cout << "Sorted array using Selection Sort: "; 
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl; 
}
