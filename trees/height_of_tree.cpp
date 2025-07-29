
#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int depth(Node* root){
    
    int counter;
    
    if(root==NULL){
        return 0;
    }
    else{
        int lmax=depth(root->left);
        int rmax=depth(root->right);
        counter=1+max(lmax, rmax);
        return counter;
    }
    
}


int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);
    root->left->right->right->right = new Node(7);
    
    cout<<depth(root);
    
    
    return 0;
}
