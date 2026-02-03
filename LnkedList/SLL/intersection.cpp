#include <iostream>
#include <cmath>
using namespace std;

// ---------------- Node Class ----------------
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// ---------------- Linked List Class ----------------
class List {
public:
    Node* head;
    Node* tail;

    // Constructor — initializes an empty list
    List() {
        head = tail = NULL;
    }

    // Insert node at the end
    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Display list elements
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// ---------------- Helper Functions ----------------

// Function to find length of a linked list
int getLength(Node* head) {
    int len = 0;
    while (head != NULL) {
        len++;
        head = head->next;
    }
    return len;
}

// Function to find intersection point of two linked lists
Node* getIntersection(Node* head1, Node* head2) {
    int len1 = getLength(head1);
    int len2 = getLength(head2);

    Node* ptr1 = head1;
    Node* ptr2 = head2;

    int diff = abs(len1 - len2);

    // Move the longer list ahead by 'diff' nodes
    if (len1 > len2) {
        for (int i = 0; i < diff; i++)
            ptr1 = ptr1->next;
    } else {
        for (int i = 0; i < diff; i++)
            ptr2 = ptr2->next;
    }

    // Move both pointers together until intersection found
    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1 == ptr2)
            return ptr1;  // Intersection point found
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return NULL; // No intersection found
}

// ---------------- Main Function ----------------
int main() {
    // Create first linked list: 10 -> 20 -> 30 -> 40 -> 50
    List list1;
    list1.insert(10);
    list1.insert(20);
    list1.insert(30);
    list1.insert(40);
    list1.insert(50);

    // Create second linked list: 15 -> 25
    List list2;
    list2.insert(15);
    list2.insert(25);

    // Connect second list to the first at node 40
    // list1: 10 -> 20 -> 30 -> 40 -> 50
    // list2: 15 -> 25 \
    //                  -> 40 -> 50
    list2.tail->next = list1.head->next->next->next;

    // Display both lists
    cout << "List 1: ";
    list1.display();
    cout << "List 2: ";
    list2.display();

    // Find intersection
    Node* intersection = getIntersection(list1.head, list2.head);

    if (intersection != NULL)
        cout << "\nIntersection Point: " << intersection->data << endl;
    else
        cout << "\nNo Intersection Found." << endl;

    return 0;
}
