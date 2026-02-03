#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL; 
Node* tail = NULL; 


void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) { 
        head = tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}


void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) { 
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}


void deleteFromBeginning() {
    if (head == NULL) { 
        cout << "List is empty. Nothing to delete.\n";
        return;
    }
    Node* temp = head;
    head = head->next;

    if (head == NULL) 
        tail = NULL;

    delete temp;
}


void deleteFromEnd() {
    if (head == NULL) {
        cout << "List is empty. Nothing to delete.\n";
        return;
    }
    if (head == tail) { 
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
}


void display() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtEnd(30);
    insertAtEnd(40);
    display();

    deleteFromBeginning();
    display();

    deleteFromEnd();
    display();

    return 0;
}
// 
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* prev;
//     Node* next;
// };

// Node* head = NULL;
// Node* tail = NULL;

// // Insert at beginning
// void insertAtBeginning(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->prev = NULL;
//     newNode->next = head;

//     if (head == NULL) { // Empty list
//         head = tail = newNode;
//     } else {
//         head->prev = newNode;
//         head = newNode;
//     }
// }

// // Insert at end
// void insertAtEnd(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = NULL;
//     newNode->prev = tail;

//     if (tail == NULL) { // Empty list
//         head = tail = newNode;
//     } else {
//         tail->next = newNode;
//         tail = newNode;
//     }
// }

// // Delete from beginning
// void deleteFromBeginning() {
//     if (head == NULL) {
//         cout << "List is empty\n";
//         return;
//     }
//     Node* temp = head;
//     head = head->next;

//     if (head == NULL) // List became empty
//         tail = NULL;
//     else
//         head->prev = NULL;

//     delete temp;
// }

// // Delete from end
// void deleteFromEnd() {
//     if (tail == NULL) {
//         cout << "List is empty\n";
//         return;
//     }
//     Node* temp = tail;
//     tail = tail->prev;

//     if (tail == NULL) // List became empty
//         head = NULL;
//     else
//         tail->next = NULL;

//     delete temp;
// }

// // Display
// void display() {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " <-> ";
//         temp = temp->next;
//     }
//     cout << "NULL\n";
// }

// int main() {
//     insertAtBeginning(10);
//     insertAtBeginning(20);
//     insertAtEnd(30);
//     insertAtEnd(40);
//     display();

//     deleteFromBeginning();
//     display();

//     deleteFromEnd();
//     display();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// Node* head = NULL;
// Node* tail = NULL;

// // Insert at beginning
// void insertAtBeginning(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;

//     if (head == NULL) { // Empty
//         head = tail = newNode;
//         newNode->next = head;
//     } else {
//         newNode->next = head;
//         head = newNode;
//         tail->next = head;
//     }
// }

// // Insert at end
// void insertAtEnd(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;

//     if (head == NULL) {
//         head = tail = newNode;
//         newNode->next = head;
//     } else {
//         tail->next = newNode;
//         tail = newNode;
//         tail->next = head;
//     }
// }

// // Delete from beginning
// void deleteFromBeginning() {
//     if (head == NULL) {
//         cout << "List is empty\n";
//         return;
//     }
//     if (head == tail) { // Only one node
//         delete head;
//         head = tail = NULL;
//         return;
//     }
//     Node* temp = head;
//     head = head->next;
//     tail->next = head;
//     delete temp;
// }

// // Delete from end
// void deleteFromEnd() {
//     if (head == NULL) {
//         cout << "List is empty\n";
//         return;
//     }
//     if (head == tail) {
//         delete head;
//         head = tail = NULL;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next != tail) {
//         temp = temp->next;
//     }
//     delete tail;
//     tail = temp;
//     tail->next = head;
// }

// // Display
// void display() {
//     if (head == NULL) {
//         cout << "List is empty\n";
//         return;
//     }
//     Node* temp = head;
//     do {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     } while (temp != head);
//     cout << "(back to head)\n";
// }

// int main() {
//     insertAtBeginning(10);
//     insertAtBeginning(20);
//     insertAtEnd(30);
//     insertAtEnd(40);
//     display();

//     deleteFromBeginning();
//     display();

//     deleteFromEnd();
//     display();

//     return 0;
// }

