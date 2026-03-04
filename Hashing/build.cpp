#include<iostream>
#include<string>
#include<vector>
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
        if(next!=NULL){
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

        for(int i=0; i< totalSize; i++){
            table[i] = NULL;
        }
    }

    int hashFunction(string key){
        int idx = 0;

        for(int i=0;i<key.size();i++){
            idx = (idx + (key[i]*key[i])) % totalSize;
        }

        return idx;
    }

    void insert(string key, int val){
        int idx = hashFunction(key);

        Node* newNode = new Node(key,val);

        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;
    }

    void rehash(){
        Node** oldTable=table;
        int oldSize=totalSize;

        totalSize=2*totalSize;
        for(int i=0;i<oldSize;i++){
            Node* temp=oldTable[i];
            while(temp!=NULL){
                insert(temp->key,temp->val);
                temp=temp->next;
            }
            if(oldTable[i]!=NULL){
                delete oldTable[i];
            }
        }
        delete[] oldTable;
    }
};

int main(){
    HashTable ht(6);
}