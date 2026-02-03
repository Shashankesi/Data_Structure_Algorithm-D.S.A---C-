#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

// comparator function defined outside main
bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second; // sort by end time
}

int main() {
    vector<int> start = {0, 1, 3};
    vector<int> end = {9, 2, 4};

    // store (start, end) pairs
    vector<pair<int, int>> activity(3);
    activity[0] = make_pair(0, 9);
    activity[1] = make_pair(1, 2);
    activity[2] = make_pair(3, 4);

    cout << "Before sorting:\n";
    for (int i = 0; i < activity.size(); i++) {
        cout << activity[i].first << ", " << activity[i].second << endl;
    }

    // sort activities based on end time
    sort(activity.begin(), activity.end(), compare);

    cout << "\nAfter sorting by end time:\n";
    for (int i = 0; i < activity.size(); i++) {
        cout << activity[i].first << ", " << activity[i].second << endl;
    }

    return 0;
}
