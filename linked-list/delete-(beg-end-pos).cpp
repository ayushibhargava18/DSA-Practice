#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    
    Node(int data){
        val=data;
        next=NULL;
    }
};

void insertatbegining(Node*& head, int val){
    Node* newnode= new Node(val);
    newnode->next=head;
    head=newnode;
}

void insertatend(Node*& head, int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    else{
        Node* temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
}

void insertatpos(Node*& head, int val, int pos){
    Node* newnode=new Node(val);
    int i=1;
    Node* temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void deleteatend(Node*& head){
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}

void deleteatbeing(Node*& head){
    head=head->next;
}

void deleteatpos(Node*& head,int pos){
    Node* temp=head;
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    temp->next=temp->next->next;
}

void display(Node* head){
    Node* temp=head;
    while (temp!=NULL){
        cout<<"\n"<<temp->val;
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    insertatbegining(head, 5);
    insertatbegining(head, 7);
    insertatbegining(head, 1);
    insertatbegining(head, 2);
    insertatend(head, 3);
    insertatpos(head, 9, 2);
    deleteatend(head);
    deleteatbeing(head);
    deleteatpos(head, 4);
    display(head);
}
