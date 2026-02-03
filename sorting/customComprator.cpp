#include <bits/stdc++.h>

using namespace std;

struct codeforces {
    string name;
    int rollNo, flatNo, banana, water;
};

// Comparator function for sorting
bool comp(const codeforces &a, const codeforces &b) {
    if (a.rollNo != b.rollNo) return a.rollNo < b.rollNo;  // primary sort by rollNo
    if (a.flatNo != b.flatNo) return a.flatNo < b.flatNo;  // secondary sort by flatNo
    if (a.banana != b.banana) return a.banana < b.banana;  // then by banana
    if (a.water != b.water) return a.water < b.water;      // then by water
    return a.name < b.name;                                // finally by name (lexicographically)
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<codeforces> arr(n);
    
    for (int i = 0; i < n; i++) {
        cout << "Enter name, rollNo, flatNo, banana, water for student " << i+1 << ":\n";
        cin >> arr[i].name >> arr[i].rollNo >> arr[i].flatNo >> arr[i].banana >> arr[i].water;
    }

    sort(arr.begin(), arr.end(), comp);

    cout << "\nSorted Students:\n";
    for (auto &st : arr) {
        cout << st.name << " "
             << st.rollNo << " "
             << st.flatNo << " "
             << st.banana << " "
             << st.water << "\n";
    }



    return 0;
}
