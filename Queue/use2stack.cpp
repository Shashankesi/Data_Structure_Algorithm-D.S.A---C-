#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1;
    stack<int> s2;

public:
    void push(int data) {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Push the new element to s1
        s1.push(data);

        // Move everything back to s1 from s2
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop() {
        if (s1.empty()) {
            cout << "Queue is empty\n";
            return;
        }
        s1.pop();
    }

    int front() {
        if (s1.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
