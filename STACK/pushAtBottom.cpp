#include<iostream>
#include<stack>
using namespace std;

// Push an element at the bottom of the stack using recursion
void pushAtBottom(stack<int> &s, int val) {
    if(s.empty()) {
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s, val); 
    s.push(temp); 
}

// Function to print stack contents without emptying it
void print(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Original stack: ";
    print(s);

    pushAtBottom(s, 4);

    cout << "After pushing 4 at bottom: ";
    print(s);

    return 0;
}
