
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

void oddeven(node*& head ){
    node* temp=head;
    node* oddhead=NULL;
    node* evenhead=NULL;
    
    while(temp!=NULL){
        if(temp->data%2==0){
            insertatend(evenhead, temp->data);
        }
        else{
            insertatend(oddhead, temp->data);
        }
        temp=temp->next;
    }
    
    node* eventemp=evenhead;
    while(eventemp->next!=NULL){
        eventemp=eventemp->next;
    }
    eventemp->next=oddhead;
    display(evenhead);
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
    display(head);
    
    cout<<"after: \n";
    oddeven(head);
}
