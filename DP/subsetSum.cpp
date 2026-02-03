#include <iostream>
#include <vector>
using namespace std;

bool isSubsetSum(vector<int>& arr, int sum) {
    int n = arr.size();

    // dp[j] = true if a subset with sum j is possible
    vector<bool> dp(sum + 1, false);
    dp[0] = true; // sum = 0 is always possible (no elements)

    // Process each number in the array
    for (int num : arr) {
        // We go backward to avoid overwriting results of the same iteration
        for (int j = sum; j >= num; j--) {
            // If we can make (j - num), then we can also make j by adding num
            if (dp[j - num])
                dp[j] = true;
        }
    }

    return dp[sum];
}

int main() {
    vector<int> arr = {3, 34, 4, 12, 5, 2};
    int sum = 9;

    if (isSubsetSum(arr, sum))
        cout << "YES, subset with the given sum exists.\n";
    else
        cout << "NO, subset with the given sum does not exist.\n";

    return 0;
}
