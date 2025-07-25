
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void traversal(Node*& root){
    if (root==NULL){
        return;
    }
    
    traversal(root->left);
    
    cout<<root->data;
    traversal(root->right);
}


int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    traversal(root);
    

    return 0;
}
