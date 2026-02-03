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
    // Destructor called fo the Node ->class
    // ~Node(){
    //     if(next != NULL){
    //         cout<<"~Node "<< data<<" \n";
    //         delete next;
    //         next=NULL;
    //     }
    // }
};

// Linked List class
class List {
    Node* head;
    Node* tail;

public:
    // Constructor — initializes an empty list
    List() {
        head = NULL;
        tail = NULL;
    }
    //Destructor called for the list-> class
    // ~List(){
    //     cout<<"~List\n";
    //     if(head != NULL){
    //         delete head;
    //         head=NULL;
    //     }
    // }
    // find the head
    Node* getHead() {
        return head;
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

    // Insert element at the end
    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Display all elements
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // to insert element at the give position in the middle of linked list
    void insert(int val, int pos){
        Node* newNode= new Node(val);
        Node* temp= head;

        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"INVALID POSITION GIVEN !!...\n";
                return;
            }
            temp = temp->next;
        }
        newNode -> next= temp->next;
        temp -> next= newNode;
    }

    // use of pop front to delete the first node of the linked list
    void pop_front(){
        if(head== NULL){
            cout<<"NOTHING \n";
            return;
        }
        Node* temp= head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }

    // to delete the node at the last of the linked list
    void pop_back(){
        Node* temp= head;
        // if(head==NULL){
        //     cout<<"OPERATION CAN'T BE PERFORMED \n";
        //     return;
        // }
        while(temp->next->next != NULL){
            temp= temp->next;
        }
            temp -> next= NULL; // temp is tail prev value
            delete tail;
            tail=temp;
    }

    // to search the element in the linked list and return the index of that element
    int searchltr(int key){
        Node* temp= head;
        int idx=0;
        while(temp != NULL){
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }

    // again searching the element but using recursion
    int helper(Node* temp,int key){
        if(temp==NULL){
            return -1;
        }
        if(temp-> data == key){
            return 0;
        }
        int idx=helper(temp->next,key);
        if(idx== -1){
            return -1;
        }
        return idx+1;
    }
    int searchRec(int key){
       return helper(head,key);
    }

    // reverse a linked list
    void Reverse(){
        Node* curr= head;
        Node* prev=NULL;
        while(curr!=NULL){
            Node* next=curr-> next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        head=prev;
    }

    // to find the size of the linked list
    int getsize(){
        int sz=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }
        return sz;
    }

    // Find and remove Nth node from the END
    void deleteNth(int n){
        int size=getsize();

        // Case 1: delete head (nth node from end is first)
        if(n==size){
            Node* toDel=head;
            cout<<"To delete the node value: "<<toDel->data<<endl;
            head=head->next;
            delete toDel;
            return;
        }

        Node* temp=head;
        for(int i=1;i<(size-n);i++){
            temp=temp->next;
        }
        Node* toDel=temp->next;
        cout<<"To delete the node value: "<<toDel->data<<endl;
        temp->next=temp->next->next;
        delete toDel;
    }

    // to print the list of the linked list
    void print(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    

    // // find the middle of the linked list
    // Node* middle(Node* temp) {
    //     Node* fast = temp;
    //     Node* slow = temp;

    //     while (fast != NULL && fast->next != NULL) {
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }

    //     return slow;
    // }

       

};

// void delete(){}
// Main function
int main() {
    List l;
    l.push_front(6);
    l.push_front(5);
    l.push_front(4);
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    // l.push_back(1);
    // l.push_back(1);

    cout << "Linked List: ";
    l.print();
    
    cout << "Linked List after reversing: ";
    l.Reverse();
    l.print();

    l.deleteNth(2);
    cout<<"After deleting the nth element from the linked list: ";
    l.print();
    // cout<<"The given data is found at the idx "<<l.searchltr(4);
    // cout<<endl;
    // cout<<"The given data is found at the idx using recursion "<<l.searchRec(5);

    // l.pop_front();
    // cout << "Linked List: ";
    // l.print();

    // l.pop_back();
    // cout << "Linked List: ";
    // l.print();

    // l.insert(100, 2);

    // cout << "Updated Linked List after indertion of an element in the middle: ";
    // l.print();


    return 0;
}
