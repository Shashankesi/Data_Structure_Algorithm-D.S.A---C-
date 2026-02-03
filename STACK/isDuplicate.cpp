#include <bits/stdc++.h>
using namespace std;

bool isDuplicate(string str) {
    stack<char> s;
    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];

        if (ch != ')') { // if not closing bracket
            s.push(ch);
        } else {
            if (s.empty()) return false; // safety check

            if (s.top() == '(') {
                // found duplicate parentheses
                return true;
            }
            // pop elements till '('
            while (!s.empty() && s.top() != '(') {
                s.pop();
            }
         s.pop(); // pop '('
        }
    }
    return false;
}

int main() {
    string str1 = "((a+b))"; // should return true (1)
    string str2 = "(a+b)";   // should return false (0)

    cout << isDuplicate(str1) << " ";
    cout << isDuplicate(str2) << endl;

    return 0;
}
