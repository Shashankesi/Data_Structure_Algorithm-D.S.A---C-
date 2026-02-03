#include<iostream>
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
    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Function to merge two sorted linked lists (recursive)
    Node* mergeHead(Node* head1, Node* head2) {
        if(head1 == NULL || head2 == NULL){
            return head1 == NULL ? head2 : head1;
        }

        if(head1->data <= head2->data){
            head1->next = mergeHead(head1->next, head2);
            return head1;
        } else {
            head2->next = mergeHead(head1, head2->next);
            return head2;
        }
    }
};

int main() {
    // create two linked lists
    List list1;
    list1.insert(1);
    list1.insert(3);
    list1.insert(5);
    list1.insert(7);

    List list2;
    list2.insert(2);
    list2.insert(4);
    list2.insert(6);
    list2.insert(8);

    // merging two linked lists
    Node* mergedHead = list1.mergeHead(list1.head, list2.head);

    // print the merged linked list
    Node* temp = mergedHead;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}
