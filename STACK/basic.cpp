#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> vec;

public:
    void push(int val) {
        vec.push_back(val);
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is already EMPTY\n";
            return;
        }
        vec.pop_back();
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack is already EMPTY\n";
            return -1;
        }
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    bool isEmpty() {
        return vec.size() == 0;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = vec.size() - 1; i >= 0; i--) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.pop(); // trying to pop from empty stack

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element: " << s.top() << endl;

    s.pop();
    s.display();

    return 0;
}
