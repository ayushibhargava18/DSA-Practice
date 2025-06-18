#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void insertatbegining(node*& head, int x){
    node* newnode=new node();
    newnode->data=x;
    if (head==NULL){
        head=newnode;
        newnode->next=NULL;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}

void display(node*& head, int x){
    node* temp = head;
    int i=0;
    while(temp->data!=x){
        i++;
        temp=temp->next;
    }
    cout<<i+1;
}

int main(){
    
    node* head = NULL;
    insertatbegining(head, 40);
    insertatbegining(head, 30);
    insertatbegining(head, 20);
    insertatbegining(head, 10);
    display(head, 30);
    
    return 0;
}
