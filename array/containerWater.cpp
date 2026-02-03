// Container with most water
#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &vec) {
    int maxWater = 0;
    int lp = 0, rp = vec.size() - 1;

    while (lp < rp) {
        int w = rp - lp;
        int ht = min(vec[lp], vec[rp]);
        int currWater = w * ht;

        maxWater = max(maxWater, currWater);

        if (vec[lp] < vec[rp]) {
            lp++;
        } else {
            rp--;
        }
        
    }
    
    return maxWater;
}

int main() {
    vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(vec) << endl;
    return 0;
}
