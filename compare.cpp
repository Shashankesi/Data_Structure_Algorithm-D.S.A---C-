#include <iostream>
#include <vector>
using namespace std;

// Linear Search
int linearSearch(vector<int> &nums, int target)
{
    int comparisons = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        comparisons++;

        if (nums[i] == target)
        {
            cout << "Linear Search\n";
            cout << "Element Found at Index : " << i << endl;
            cout << "Comparisons : " << comparisons << endl;
            return i;
        }
    }

    cout << "Linear Search\n";
    cout << "Element Not Found\n";
    cout << "Comparisons : " << comparisons << endl;

    return -1;
}

// Binary Search (Iterative)
int binarySearch(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int comparisons = 0;

    while (low <= high)
    {
        comparisons++;

        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            cout << "\nBinary Search\n";
            cout << "Element Found at Index : " << mid << endl;
            cout << "Comparisons : " << comparisons << endl;
            return mid;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "\nBinary Search\n";
    cout << "Element Not Found\n";
    cout << "Comparisons : " << comparisons << endl;

    return -1;
}

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    linearSearch(nums, target);

    binarySearch(nums, target);

    return 0;
}