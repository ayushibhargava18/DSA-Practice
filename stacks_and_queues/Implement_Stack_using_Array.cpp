#include <iostream>
using namespace std;

#define SIZE 5

void pop(int arr[], int &top){
    if(top==-1){
        cout<<"underflow";
    }
    else{
        top--;
    }
}

void push(int arr[], int x, int &top){
    if(top==SIZE){
        cout<<"Overflow";
    }
    else{
        top++;
        arr[top]=x;
    }
}

void display(int arr[], int top){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<"\n";
    }
}

void topmost(int arr[], int top){
    cout<<arr[top];
}

void size(int arr[], int top){
    cout<<top+1;
}



int main(){
    int arr[SIZE];
    int top=-1;
    push(arr, 1, top);
    push(arr, 5, top);
    push(arr, 7, top);
    pop(arr, top);
    topmost(arr, top);
    size(arr, top);
    
}
