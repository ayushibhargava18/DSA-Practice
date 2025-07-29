
#include <iostream>
#include <algorithm> 
#include <cmath>     

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


int checkheight(Node* root){
    if(root==NULL){
        return 0;
    }
    int l=checkheight(root->left);
    if (l==-1){
        return -1;
    }
    int r=checkheight(root->right);
    if(r==-1){
        return -1;
    }
    
    if(abs(l-r)>1){
        return -1;
    }
    
    return 1+max(l,r);
}

void balance(Node* root){
    if (checkheight(root)==-1){
        cout<< "false";
    }
    else{
        cout<< "true";
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
    
    balance(root);
    
    
    return 0;
}
