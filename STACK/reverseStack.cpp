#include <bits/stdc++.h>
using namespace std;

// Print the stack (by value, so original is safe)
void print(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

// Helper: push element at the bottom
void pushAtBottom(stack<int> &s, int val) {
    if (s.empty()) {
        s.push(val);
        return;
    }

    int top = s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(top);
}

// Recursive stack reversal
void reverseStack(stack<int> &s) {
    if (s.empty()) return;

    int top = s.top();
    s.pop();

    reverseStack(s);      
    pushAtBottom(s, top); 
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Original stack: ";
    print(s);

    reverseStack(s);

    cout << "Reversed stack: ";
    print(s);

    return 0;
}
