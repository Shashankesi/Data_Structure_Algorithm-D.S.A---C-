#include <iostream>
using namespace std;

template <class T>
class Stack {
    T stack[100];
    int top;
    int max;

public:
    Stack(int m) {
        top = -1;
        max = m;
    }

    void underflow() {
        if (top == -1)
            cout << "Stack Underflow" << endl;
        else
            cout << "Not underflow" << endl;
    }

    void overflow() {
        if (top == (max - 1))
            cout << "Stack Overflow" << endl;
        else
            cout << "Not overflow" << endl;
    }

    void push(T v) {
        if (top == (max - 1))
            return;
        stack[++top] = v;
    }

    void pop() {
        if (top == -1)
            return;
        top--;
    }

    T peek() {
        if (top == -1)
            return T();
        return stack[top];
    }

    void display() {
        if (top == -1)
            return;
        for (int i = 0; i <= top; i++)
            cout << stack[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> s(5);
    s.underflow();
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << "Top element: " << s.peek() << endl;
    s.pop();
    s.display();
    s.overflow();
    return 0;
}
