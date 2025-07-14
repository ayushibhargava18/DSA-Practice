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

void insertloop(node*& head, int x){
    node* newnode=new node();
    newnode->data=x;
    node* temp=head;
    int i=0;
    while(i!=3){
        temp=temp->next;
        i++;
    }
    newnode->next=temp;
    
    node* temp2=head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=newnode;
}

void detect(node*& head){
    node* fast=head;
    node* slow=head;
    node* temp=head;
    
    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"loop detected starting at "<<slow->data;
            return;
        }
    }
    cout <<"no loop detected";
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
    insertloop(head, 7);
    detect(head);
}
