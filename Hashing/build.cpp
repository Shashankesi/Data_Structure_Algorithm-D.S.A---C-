#include<iostream>
#include<string>
using namespace std;

class Node{
public:
    string key;
    int val;
    Node* next;

    Node(string key,int val){
        this->key = key;
        this->val = val;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};

class HashTable{
    int totalSize;
    int currSize;
    Node** table;

public:

    HashTable(int size){
        totalSize = size;
        currSize = 0;

        table = new Node*[totalSize];

        for(int i = 0; i < totalSize; i++){
            table[i] = NULL;
        }
    }

    // Hash Function
    int hashFunction(string key){
        int idx = 0;

        for(int i = 0; i < key.length(); i++){
            idx = (idx + key[i]) % totalSize;
        }

        return idx;
    }

    // Rehash
    void rehash(){

        Node** oldTable = table;
        int oldSize = totalSize;

        totalSize = 2 * totalSize;
        currSize = 0;

        table = new Node*[totalSize];

        for(int i = 0; i < totalSize; i++){
            table[i] = NULL;
        }

        for(int i = 0; i < oldSize; i++){

            Node* temp = oldTable[i];

            while(temp != NULL){
                insert(temp->key,temp->val);
                temp = temp->next;
            }

            if(oldTable[i] != NULL){
                delete oldTable[i];
            }
        }

        delete[] oldTable;
    }

    // Insert
    void insert(string key,int val){

        int idx = hashFunction(key);

        Node* newNode = new Node(key,val);

        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;

        float loadFactor = currSize/(1.0*totalSize);

        if(loadFactor > 0.7){
            rehash();
        }
    }

    // Search
    int search(string key){

        int idx = hashFunction(key);

        Node* temp = table[idx];

        while(temp != NULL){

            if(temp->key == key){
                return temp->val;
            }

            temp = temp->next;
        }

        return -1;
    }

    // Delete
    void remove(string key){

        int idx = hashFunction(key);

        Node* temp = table[idx];
        Node* prev = NULL;

        while(temp != NULL){

            if(temp->key == key){

                if(prev == NULL){
                    table[idx] = temp->next;
                }
                else{
                    prev->next = temp->next;
                }

                temp->next = NULL;
                delete temp;

                currSize--;
                return;
            }

            prev = temp;
            temp = temp->next;
        }
    }

    // Print Table
    void print(){

        for(int i = 0; i < totalSize; i++){

            cout<<"idx "<<i<<" -> ";

            Node* temp = table[i];

            while(temp != NULL){

                cout<<"("<<temp->key<<","<<temp->val<<")->";

                temp = temp->next;
            }

            cout<<"NULL"<<endl;
        }
    }

};

int main(){

    HashTable ht(6);

    ht.insert("Apple",100);
    ht.insert("Mango",80);
    ht.insert("Banana",60);
    ht.insert("Orange",50);

    ht.print();

    cout<<"Apple Price: "<<ht.search("Apple")<<endl;

    ht.remove("Apple");

    cout<<"After deletion: "<<ht.search("Apple")<<endl;

    ht.print();
}