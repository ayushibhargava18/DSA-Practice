#include<iostream>
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

void deletefromend(node*& head){
    node* temp=head;
    if(head==NULL){
        return;
    }
    else if (head->next==NULL){
        head=NULL;
        return;
    }
    else{
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
    }
}

void deletefrombegining(node*& head){
    node* temp=head;
    head=temp->next;
}

void deleteapos(node*& head, int pos){
    node* temp=head;
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    temp->next=temp->next->next;
}

void display(node*& head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}

int main(){
    
    node* head = NULL;
    insertatbegining(head, 40);
    insertatbegining(head, 30);
    insertatbegining(head, 20);
    insertatbegining(head, 10);
    deleteapos(head, 3);
    display(head);
    
    return 0;
}
