#include <iostream>
#include <vector>
using namespace std;

int minCoinRequired(vector<int> &coins, int value) {
    int ans = 0;
    int n = coins.size();

    // Start from the largest coin → greedy approach
    for (int i = n - 1; i >= 0 && value > 0; i--) {
        if (value >= coins[i]) {
            ans += value / coins[i];    
            value = value % coins[i];     
        }
    }
    return ans;
}

int main() {
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    cout << "Minimum coins required = " << minCoinRequired(coins, 590);
}
