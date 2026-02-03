// product of array except it self
#include <bits/stdc++.h>
using namespace std;

vector<long long> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<long long> res(n, 1);

    long long prefix = 1;
    for (int i = 0; i < n; i++) {
        res[i] = prefix;
        prefix *= nums[i];
    }

    long long suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= suffix;
        suffix *= nums[i];
    }

    return res;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<long long> ans = productExceptSelf(arr);

    for (auto x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
