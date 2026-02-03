#include <iostream>
#include <queue>
#include <string>
using namespace std;

void NonRepeatString(string str) {
    queue<char> q;
    int freq[26] = {0};

    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];
        q.push(ch);
        freq[ch - 'a']++;

        // Remove characters from queue which have frequency > 1
        while (!q.empty() && freq[q.front() - 'a'] > 1) {
            q.pop();
        }

        if (q.empty()) {
            cout << "-1\n";  // no non-repeating character
        } else {
            cout << q.front() << endl;  // first non-repeating character so far
        }
    }
}

int main() {
    string str = "aabccxb";
    NonRepeatString(str);
    return 0;
}
