#include <iostream>
#include <stack>
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

void preorder(Node*& root){
    stack<Node*> s;
    s.push(root);
    
    while(!s.empty()){
        Node* current = s.top();
        cout<<current->data;
        s.pop();
        if(current->right){
        s.push(current->right);
        }
        if(current->left){
        s.push(current->left);
        }
    }
}

int main(){
    
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(5);
    preorder(root);
    
    return 0;
}
