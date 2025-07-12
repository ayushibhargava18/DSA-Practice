
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

void display(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}

void hare(node*& head){
    node* fast=head;
    node* slow=head;
    
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<"middle element: "<<slow->data;
}


int main()
{
    node* head=NULL;
    insertatbegining(head, 5);
    insertatbegining(head, 4);
    insertatbegining(head, 3);
    insertatbegining(head, 2);
    insertatbegining(head, 1);
    
    display(head);
    hare(head);
}
