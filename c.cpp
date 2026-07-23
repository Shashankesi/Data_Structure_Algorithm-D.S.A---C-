#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};

    int key = 50;

    int result = binarySearch(arr, key);

    cout << "Array: ";
    for (int x : arr)
        cout << x << " ";

    cout << "\nElement to search: " << key << endl;

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}