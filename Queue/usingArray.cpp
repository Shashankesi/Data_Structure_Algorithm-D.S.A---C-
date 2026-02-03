#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int capacity;
    int currSize;
    int f, r; // front and rear

public:
    Queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        f = r = -1;
    }

    void push(int data) {
        if (currSize == capacity) {
            cout << "Queue is FULL\n";
            return;
        }

        // first element
        if (f == -1) {
            f = 0;
        }

        r = (r + 1) % capacity;
        arr[r] = data;
        currSize++;
        cout << data << " enqueued\n";
    }

    void pop() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return;
        }

        cout << arr[f] << " dequeued\n";
        f = (f + 1) % capacity;
        currSize--;

        // reset if queue becomes empty
        if (currSize == 0) {
            f = r = -1;
        }
    }

    int front() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return -1;
        }
        return arr[f];
    }

    bool empty() {
        return currSize == 0;
    }

    void display() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = 0; i < currSize; i++) {
            cout << arr[(f + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5); // should print Queue is FULL

    q.display();

    cout << "Front element: " << q.front() << endl;

    q.pop();
    q.pop();
    q.display();

    q.push(5);
    q.display();

    cout << "Front element: " << q.front() << endl;

    return 0;
}
