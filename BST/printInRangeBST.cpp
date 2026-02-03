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

    void printInRange(Node* root, int start, int end){
        if(root==NULL) return;

        if(start<=root->data && root->data<=end){ //case:1
            cout<<root->data<<" ";
            printInRange(root->left,start,end);
            printInRange(root->right,start,end);
        }else if(root->data<start){ //case 2
            printInRange(root->right,start,end);
        }else{ //case 3
            printInRange(root->left,start,end);
        }
    }
    int main() {
        int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

        Node* root = buildBST(arr, 9);

        inorder(root);
        cout << endl;

        printInRange(root,5,10);
        cout<<endl;

        return 0;
    }