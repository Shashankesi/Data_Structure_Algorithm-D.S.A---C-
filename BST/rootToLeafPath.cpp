#include <iostream>
#include <vector>
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

Node* buildBST(int arr[], int n) {
    Node* root = NULL;

    for (int i = 0; i < n; i++) {
        root = insertBST(root, arr[i]);
    }

    return root;
}

// Inorder traversal
void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void printPath(vector<int> path){
    cout << "Path:";
    for(int i = 0; i < path.size(); i++){
        cout << path[i]<<",";
    }
    cout << endl;
}

void pathHelper(Node* root, vector<int> &path){
    if(root == NULL) return;

    path.push_back(root->data);

    if(root->left == NULL && root->right == NULL){
        printPath(path);
        path.pop_back();
        return;
    }

    pathHelper(root->left, path);
    pathHelper(root->right, path);

    path.pop_back();
}

void rootToLeafPath(Node* root){
    vector<int> path;
    pathHelper(root, path);
}

int main() {
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

    Node* root = buildBST(arr, 9);
    rootToLeafPath(root);

    return 0;
}
