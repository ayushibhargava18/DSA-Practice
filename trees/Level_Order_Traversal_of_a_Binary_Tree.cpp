#include <iostream>
#include <queue>
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

void levelorder(Node*& root){
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        Node* current=q.front();
        cout<<current->data;
        q.pop();
        if(current->left){q.push(current->left);}
        
        if(current->right){q.push(current->right);}
    }
}


int main(){
    
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(5);
    levelorder(root);
    return 0;
}
