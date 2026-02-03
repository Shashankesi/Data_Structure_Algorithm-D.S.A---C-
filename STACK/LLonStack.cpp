#include <iostream>
#include <list>
using namespace std;

template <class T>
class Stack {
    list<T> ll;  // underlying linked list

public:
    // Push element on top
    void push(T val) {
        ll.push_front(val);
    }

    // Pop top element
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        ll.pop_front();
    }

    // Return top element
    T top() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return T(); // return default value for type T
        }
        return ll.front();
    }

    // Check if empty
    bool isEmpty() {
        return ll.empty();
    }

    // Display all elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (auto it = ll.begin(); it != ll.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int> s;

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
