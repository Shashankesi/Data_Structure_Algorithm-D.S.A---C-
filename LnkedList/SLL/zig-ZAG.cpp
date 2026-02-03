#include <iostream>
using namespace std;

// Node class — represents one element of the list
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Linked List class
class List {
public:
    Node* head;
    Node* tail;

    // Constructor — initializes an empty list  
    List() {
        head = NULL;
        tail = NULL;
    }

    // Function to insert values into the list
    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    Node* getHead() {
        return head;
    }

    // Reverse a linked list
    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Split at mid to get the head of the second part
    Node* splitAtMid(Node* head) {
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev != NULL) {
            prev->next = NULL;  // Split the list
        }
        return slow;  // head of second half
    }

    // ZigZag merge the linked list
    Node* zigZAG(Node* head) {
        Node* rightHead = splitAtMid(head);
        Node* rightHeadReverse = reverse(rightHead);

        Node* left = head;
        Node* right = rightHeadReverse;
        Node* tail = right;

        while (left != NULL && right != NULL) {
            Node* nextLeft = left->next;
            Node* nextRight = right->next;

            left->next = right;
            right->next = nextLeft;

            tail = right;
            left = nextLeft;
            right = nextRight;
        }
        if (right != NULL) {
            tail->next = right;
        }

        return head;
    }

    // Print the linked list
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Overloaded print with head parameter
    void print(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    List l;
    l.push_front(5);
    l.push_front(4);
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);

    cout << "Original list:\n";
    l.print();

    // Node* newHead = l.zigZAG(l.getHead());
    // cout << "ZigZag merged list:\n";
    // l.head = newHead;
    // l.print();

    // Calling zigzag again to test reusability
    l.head = l.zigZAG(l.getHead());
    cout << "After calling zigZAG again:\n";
    l.print(l.getHead());

    return 0;
}
