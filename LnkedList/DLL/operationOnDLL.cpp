#include<iostream>
using namespace std;

// NODE class
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Doubly Linked List class
class DoublyList {
    Node* head;
    Node* tail;
public:
    DoublyList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;  
        }
    }

    // push the element at the back 
    void push_back(int val){
        Node* newNode= new Node(val);

        if(head == NULL){
            head=tail=newNode;
        }else{
            tail->next= newNode;
            newNode->prev= tail;
            tail=newNode;
            newNode->next=NULL;
        }
    }
    // pop the front element
    void pop_front() {
        if (head == NULL) {
            cout << "Nothing to pop out" << endl;
            return;
        }

        Node* temp = head;
        if (head == tail) {
            head = tail = NULL;
        } 
        else {
            head = head->next;
            head->prev = NULL;
        }

        delete temp;
    }

    //pop_back
    void pop_back(){
        if(head == NULL){
            cout<<"No element can pop out";
            return;
        }
        Node* temp= head;
        while(temp->next->next!=NULL){
            temp= temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }

    //one more way to do it pop_back
    void pop_backNew(){
        if(head==NULL){
            cout<<"EMPTY";
            return;
        }
        Node* temp= tail;
        tail=tail->prev;
        tail->next=NULL;
        cout<<"DELETED: "<<temp->data<< endl;
        delete temp;
    }

    // Print the doubly linked list
    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "<->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }


};

int main() {
    DoublyList dll;

    dll.push_front(4);
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);

    dll.push_back(5);
    dll.push_back(6);

    dll.pop_front();

    // dll.pop_back();

    dll.pop_backNew();
    cout<<"Doubly Linked List ";
    dll.printList();

    return 0;
}
