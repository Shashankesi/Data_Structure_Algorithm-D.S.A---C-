#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

Node* LCA(Node* root, int a, int b) {
    if (root == NULL)
        return NULL;

    if (root->data == a || root->data == b)
        return root;

    Node* left = LCA(root->left, a, b);
    Node* right = LCA(root->right, a, b);

    if (left && right)
        return root;

    return (left != NULL) ? left : right;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Node* ans = LCA(root, 4, 5);

    cout <<"LCA: "<< ans->data;
    return 0;
}