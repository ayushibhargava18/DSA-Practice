
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


void palindrome(node*& head){
    node* fast=head;
    node* slow=head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    node* prev=NULL;
    node* current=slow;
    node* ahead;
    
    while(current!=NULL){
        ahead=current->next;
        current->next=prev;
        prev=current;
        current=ahead;
    }
    
    node* first=head;
    node* second=prev;
    
    while(second!=NULL){
        if(first->data!=second->data){
            cout<<"false";
            return;
        }
        else{
            first=first->next;
            second=second->next;
        }
    }
    cout<<"true";
}


int main()
{
    node* head=NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 2);
    insertatend(head, 5);
    palindrome(head);
}
