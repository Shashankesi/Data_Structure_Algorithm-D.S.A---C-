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

class List {
    Node* head;
    Node* tail;

public:
    // Constructor — initializes an empty list
    List() {
        head = NULL;
        tail = NULL;
    }
    // Insert element at the beginning
    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    // detect cycle in linked list
    bool isCycle(Node* head){
        Node* slow=head;
        Node* fast= head;
        while(fast != NULL && fast-> next != NULL){
            slow= slow-> next;
            fast= fast-> next-> next;

            if(slow==fast){
                return true;
            }
        }
        return false;
    }
    // find the head
    Node* getHead() {
        return head;
    }

    //get the tail
    Node* getTail() {   
        return tail;
    }

    // removing cycle
    void removeCycle(Node* head){
        Node* slow=head;
        Node* fast= head;
        do{
            slow= slow-> next;
            fast= fast-> next-> next;
        }while(slow != fast);

        fast=head;
        while(slow-> next != fast-> next){
            slow= slow-> next;
            fast= fast-> next;
        }
        slow-> next=NULL;
    }
};

int main() {
    List l;
    l.push_front(6);
    l.push_front(5);
    l.push_front(4);
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);

    // Creating a cycle for testing
    // Node* head = l.getHead();
    // Node* temp = head;
    // while(temp->next != NULL){
    //     temp = temp->next;
    // }
   // temp->next = head->next; // Creating a cycle

   l.getTail()->next = l.getHead()->next; // Creating a cycle

    // if(l.isCycle(l.getHead())){
    //     cout << "Cycle detected in the linked list." << endl;
    // } else {
    //     cout << "No cycle detected in the linked list." << endl;
    // }
    if(l.isCycle(l.getHead())){
        cout << "Cycle detected in the linked list." << endl;
        l.removeCycle(l.getHead());
        cout << "Cycle removed from the linked list." << endl;
    } else {
        cout << "No cycle detected in the linked list." << endl;
    }

    return 0;
}