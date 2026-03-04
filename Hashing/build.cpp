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
};   

int main(){
    HashTable ht(6);
}