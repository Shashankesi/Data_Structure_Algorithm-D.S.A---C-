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

// Insert a new node at the end
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert a node at the beginning
void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Delete a node by value
void deleteNode(Node*& head, int val) {
    if (head == NULL) return;

    if (head->data == val) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;
    while (curr->next != NULL && curr->next->data != val) {
        curr = curr->next;
    }

    if (curr->next == NULL) {
        cout << "Value not found!\n";
        return;
    }

    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
}

// Display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtBeginning(head, 5);

    cout << "Linked List: ";
    display(head);

    deleteNode(head, 20);
    cout << "After deleting 20: ";
    display(head);

    return 0;
}
