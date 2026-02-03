#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this -> data = data;
        left = right = NULL;
    }
};

static int idx=-1;

    Node* buildTree(vector<int> &nodes){
        idx++;
    if(nodes[idx] == -1){
            return NULL;
        }

        Node* currNode=new Node(nodes[idx]);
        currNode->left=buildTree(nodes);
        currNode->right=buildTree(nodes);

        return currNode;
    }

    // preorder
    void preorder(Node* root){
        if(root==NULL){
            return;
        }

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    // inorder
    void inorder(Node* root){
        if(root == NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }

    //postorder
    void postorder(Node* root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

    void levelOrder(Node* root){
        if(root == NULL){
            return;
        }

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            Node* curr=q.front();
            q.pop();
            cout<<curr->data<<" ";

            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
        cout<<endl;


    }

    int main() {
   
    //       1
    //      / \
    //     2   3
    //    / \   \
    //   4   5   6
    // Preorder arr (use -1 for nulls): 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root=buildTree(nodes);
    cout<<"Traversal of tree through preorder:";
    preorder(root);
    cout<<endl;
    
    cout<<"Traversal of tree through inorder:";
    inorder(root);
    cout<<endl;
    
    cout<<"Traversal of tree through postorder:";
    postorder(root);
    cout<<endl;

    cout<<"Traversal of tree through levelOrder:";
    levelOrder(root);
    cout<<endl;

    }