
#include <iostream>
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

void insertatpos(node*& head, int x, int pos){
    node* temp=head;
    node* newnode = new node();
    newnode->data=x;
    int i=0;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void display(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}

int main()
{
    node* head=NULL;
    insertatbegining(head, 10);
    insertatbegining(head, 12);
    insertatend(head, 45);
    insertatpos(head, 56, 1);
    display(head);
}
