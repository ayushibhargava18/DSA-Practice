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


void insertatpos(node*& head, int x, int pos){
    node* newnode = new node();
    newnode->data=x;
    int i=1;
    node* temp = head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
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
    insertatpos(head, 3, 2);
    display(head);
    return 0;
    
}
