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



void deleteatpos(node*& head, int pos){
    int i=1;
    node* temp = head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    node* temp2=temp->prev;
    temp2->next=temp->next;
    temp->next->prev=temp2;
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

    deleteatpos(head, 3);
    display(head);
    return 0;
    
}
