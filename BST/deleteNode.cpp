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


    Node* buildBST(int arr[], int n) {
    Node* root = NULL;

    for (int i = 0; i < n; i++) {
        root = insertBST(root, arr[i]);
    }

    return root;
}
    //getInorderSuccessor code logic
    Node* getInorderSuccessor(Node* root){
        while(root->left!=NULL){
            root =root->left;
        }
        return root; //IS
    }
    // delete Node logic
    Node* delNode(Node* root, int val){
        if(root==NULL) return NULL;
        
        if(val< root->data){ //leftsubtree
            root->left=delNode(root->left,val);
        }else if(val<root->data){ //rightsubtree
            root->right= delNode(root->right,val);
        }else{
            //case:1 ->0 children

            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }

            //case:2 -> 1 children
            if(root->left==NULL || root->right==NULL){
                return root->left==NULL ? root->right :root->left;
            }

            //case:2 -> 2 children must important case here the logic applies for the inorder successor
            Node* IS=getInorderSuccessor(root->right);
            root->data=IS->data;
            root->right=delNode(root->right, IS->data);
            return root;
        }
        return NULL;
    }

    int main() {
        int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

        Node* root = buildBST(arr, 9);

         root = delNode(root, 10);

        inorder(root);
        cout << endl;

        return 0;
    }
