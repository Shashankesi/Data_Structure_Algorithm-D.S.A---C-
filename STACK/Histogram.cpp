#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int maxAreaHistogram(vector<int> heights) {
    int n = heights.size();
    vector<int> nsl(n);  // Next Smaller to Left
    vector<int> nsr(n);  // Next Smaller to Right
    stack<int> s;

    // Next Smaller to Left
    for (int i = 0; i < n; i++) {
        while (!s.empty() && heights[i] <= heights[s.top()]) {
            s.pop();
        }
        if (s.empty()) {
            nsl[i] = -1;
        } else {
            nsl[i] = s.top();
        }
        s.push(i);
    }


    // Clear stack for reuse
    while (!s.empty()) s.pop();

    // Next Smaller to Right 
    // here we have stored n beacuse to avoid the negative value if we store n-1
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && heights[i] <= heights[s.top()]) {
            s.pop();
        }
        if (s.empty()) {
            nsr[i] = n;
        } else {
            nsr[i] = s.top();
        }
        s.push(i);
    }

    // Calculate maximum area
    int maxArea = 0;
    for (int i = 0; i < n; i++) {
        int width = nsr[i] - nsl[i] - 1;
        int area = heights[i] * width;
        maxArea = max(maxArea, area);
    }

    return maxArea;
}



int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << "Maximum Area in Histogram: " << maxAreaHistogram(heights) << endl;
    return 0;
}
