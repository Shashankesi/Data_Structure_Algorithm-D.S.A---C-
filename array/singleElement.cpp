#include <iostream>
#include <vector>
using namespace std;

int findSingleElement(const vector<int> &arr) {
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (mid % 2 == 1) {
            mid--;
        }

        if (arr[mid] == arr[mid + 1]) {
            low = mid + 2;
        } else {
            high = mid;
        }
    }
    return arr[low];
}

int main() {
    vector<int> vec = {1, 1, 2, 2, 4, 4, 5, 5, 6};
    cout << "Single element: " << findSingleElement(vec) << endl;
}
