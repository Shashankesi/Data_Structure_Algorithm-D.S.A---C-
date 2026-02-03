#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    reverse(vec.begin(), vec.end());

    for (auto val : vec) {
        cout << val << endl;
    }

    string s="abc";
    next_permutation(s.begin(),s.end());
    cout<<s;
    prev_permutation(s.begin(), s.end());


    return 0;
}
