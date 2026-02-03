#include<iostream>
#include<iterator>
#include<list>
using namespace std;    

// print the list using iterator
void printList(list<int>ll){
    list<int>::iterator it;
    cout<<"Linked List: ";
    for(it=ll.begin(); it!=ll.end(); it++){
        cout<<*it<<" -> ";
    }           
    cout<<"NULL\n";
}

// insert the element using iterator at any position
void insertAtPosition(list<int>& ll, int value, int position) {
    auto it = ll.begin();
    advance(it, position);
    ll.insert(it, value);
}

int main(){
    list<int>ll;
    // pushing at back
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);
// pushing in front
    ll.push_front(5);
    ll.push_front(6);
    ll.push_front(7);
    // using the insert in list-STL
    insertAtPosition(ll, 8, 3);
    insertAtPosition(ll, 9, 5);

    printList(ll);
}