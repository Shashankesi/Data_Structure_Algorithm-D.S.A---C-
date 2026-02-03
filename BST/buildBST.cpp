#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


// Insert a node in BST
Node* insertBST(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val < root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);

    return root;
}

// Inorder traversal
void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Search in BST
bool searchBST(Node* root, int key) {
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;
    else if (key < root->data)
        return searchBST(root->left, key);
    else
        return searchBST(root->right, key);
}

// Find minimum value
int findMin(Node* root) {
    if (root == NULL) return -1;

    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

int main() {
    Node* root = NULL;

    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insertBST(root, val);
    }

    cout << "\nInorder traversal: ";
    inorder(root);

    int key;
    cout << "\nEnter value to search: ";
    cin >> key;

    if (searchBST(root, key))
        cout << "Found";
    else
        cout << "Not Found";

    cout << "\nMinimum value in BST: " << findMin(root);

    return 0;
}
