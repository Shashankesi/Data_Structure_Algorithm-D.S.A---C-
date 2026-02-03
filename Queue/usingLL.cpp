#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Queue implementation using linked list
class Queue {
    Node* head;
    Node* tail;

public:
    Queue() {
        head = tail = NULL;
    }

    // Insert element at the end (enqueue)
    void push(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Remove element from front (dequeue)
    void pop() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == NULL) tail = NULL; // reset tail when queue becomes empty
    }

    // Get the front element
    int front() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return -1;
        }
        return head->data;
    }

    // Check if queue is empty
    bool empty() {
        return (head == NULL);
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

    q.front();

    return 0;
}
