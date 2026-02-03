#include <bits/stdc++.h>
using namespace std;

string reverseString(string str) {
    string ans = "";
    stack<char> s;
    int n = str.size();

    // Push all characters into the stack
    for (int i = 0; i < n; i++) {
        s.push(str[i]);
    }

    // Pop all characters and append to answer
    while (!s.empty()) {
        ans += s.top(); // correct usage of .top()
        s.pop();
    }

    return ans;
}

int main() {
    string str = "abcd";
    cout<<"Original string: "<<str<<endl;
    cout << "Reversed: " << reverseString(str) << endl;
    return 0;
}
