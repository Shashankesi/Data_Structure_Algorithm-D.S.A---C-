#include <iostream>
using namespace std;

// Node structure for Doubly Linked List
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Function to insert a node at the end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {  // List is empty
        newNode->prev = nullptr;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Function to delete a node from the end
void deleteAtEnd(Node*& head) {
    if (head == nullptr) { // List is empty
        cout << "List is empty, nothing to delete.\n";
        return;
    }

    Node* temp = head;

    // If only one node exists
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    // Traverse to the last node
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->prev->next = nullptr; // Disconnect last node
    delete temp;
}

// Function to display the list
void display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    cout << "List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = nullptr;
    int choice, value;

    do {
        cout << "\n1. Insert at End\n2. Delete at End\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insertAtEnd(head, value);
                break;
            case 2:
                deleteAtEnd(head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
