
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

void insertatbegining(node*& head, int x){
    node* newnode= new node();
    newnode->data=x;
    
    newnode->prev=NULL;
    newnode->next=head;
    if (head!=NULL){
        head->prev=newnode;
    }
    head=newnode;
}

void display(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}

void reverse(node*& head){
    node* current=head;
    node* p=NULL;
    node* last = NULL;
    
    while(current!=NULL){
        
        p=current->next;
        current->next=current->prev;
        current->prev=p;
        last = current;
        current=current->prev;
        
        head=last;
        
    }
    
    
    
    
    
}

int main(){
    node* head=NULL;
    insertatbegining(head, 5);
    insertatbegining(head, 4);
    insertatbegining(head, 3);
    insertatbegining(head, 2);
    insertatbegining(head, 1);

    display(head);
    
    reverse(head);
    display(head);
    
    return 0;
}
