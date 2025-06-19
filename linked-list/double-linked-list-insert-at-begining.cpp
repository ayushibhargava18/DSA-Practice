#include <iostream>
using namespace std;

struct node{
    node* next;
    node* prev;
    int data;
};

void insertatbegining(node*& head, int x){
    node* newnode=new node();
    newnode->data=x;
    
    if (head==NULL){
        newnode->prev=NULL;
        newnode->next=NULL;
        head=newnode;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=NULL;
        head=newnode;
    }
}


void display(node*& head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}

int main()
{
    node* head=NULL;
    insertatbegining(head, 5);
    insertatbegining(head, 4);

    display(head);
    return 0;
    
}
