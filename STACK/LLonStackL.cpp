#include<iostream>
using namespace std;

// Node class template
template<class T>
class Node {
public:
    T data;
    Node* next;

    Node(T val) {            // ✅ 'T' instead of 't'
        data = val;
        next = NULL;
    }
};

// Stack class template
template<class T>
class Stack {
    Node<T>* head;           // ✅ should be Node<T>*
public:
    Stack() {
        head = NULL;
    }

    void push(T val) {
        Node<T>* newNode = new Node<T>(val);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (isEmpty()) {     // ✅ handle empty case
            cout << "Stack underflow! Cannot pop.\n";
            return;
        }
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }

    T top() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            exit(1);         // or throw an exception
        }
        return head->data;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements (top to bottom): ";
        Node<T>* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
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
