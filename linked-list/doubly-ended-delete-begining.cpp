#include <iostream>
using namespace std;

struct node{
    node* next;
    node* prev;
    int data;
};

void insertatend(node*& head, int x){
    node* newnode = new node();
    newnode->data=x;
    newnode->next=NULL;
    
    if(head==NULL){
        newnode->prev=NULL;
        head=newnode;
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
}

void deleteatbegining(node*& head){
    head=head->next;
    head->prev=NULL;
    
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
        insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    insertatend(head, 5);

    insertatend(head, 6);
    insertatend(head, 7);
    insertatend(head, 8);
    insertatend(head, 9);
    deleteatbegin(head);
    display(head);
    return 0;
    
}
