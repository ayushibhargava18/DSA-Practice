
#include <iostream>
using namespace std;

#define SIZE 5

void insert(int queue[], int &rear, int &front, int x){
    if(rear==SIZE-1){
        cout<<"overflow";
    }
    else if(front==-1 && rear==-1){
        front++;
        rear++;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}


void stack_push(int x, int queue[], int &rear, int &front){
    insert(queue, rear, front, x);
    int n = size(rear, front);

    for(int i = 0; i < n - 1; i++){
        int temp = queue[front];
        deletes(queue, rear, front);
        insert(queue, rear, front, temp);
    }
}

void deletes(int queue[], int &rear, int &front){
    if(front==-1 && rear==-1){
        cout<<"underflow";
    }
    else if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
}

void display(int queue[], int rear, int front){
    for(int i=front; i<=rear;i++){
        cout<<queue[i];
    }
}

int main()
{
    int rear=-1;
    int front=-1;
    int queue[SIZE];
    insert(queue, rear, front, 1);
    insert(queue, rear, front, 2);
    insert(queue, rear, front, 3);
    
    display(queue, rear, front);


    return 0;
}
