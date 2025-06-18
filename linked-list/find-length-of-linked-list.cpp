#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void display(node*& head){
    node* temp = head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<count;
}

int main(){
    
    node* head = NULL;
    insertatbegining(head, 40);
    insertatbegining(head, 30);
    insertatbegining(head, 20);
    insertatbegining(head, 10);
    display(head);
    
    return 0;
}
