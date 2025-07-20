
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};


void insertatend(node*& head, int x){
    node* newnode = new node();
    newnode->data=x;
    if (head==NULL){
        head=newnode;
        newnode->next=NULL;
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
}

void display(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}

void reverse(node*& head){
    node* current=head;
    node* prev=NULL;
    node* ahead;
    
    while(current!=NULL){
        ahead=current->next;
        current->next=prev;
        prev=current;
        current=ahead;
    }
    head=prev;
}

int main()
{
    node* head=NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    insertatend(head, 5);
    display(head);
    reverse(head);
    display(head);
    
}
