#include <bits/stdc++.h>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> vec = {4, 1, 5, 2, 3};
    bubbleSort(vec);

    cout << "Sorted array: "; 
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl; 
}
