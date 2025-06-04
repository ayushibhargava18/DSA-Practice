#include <iostream>
using namespace std;

void binary(int a[],int min, int max,int x){
    while (min<=max){
        int mid=(min+max)/2;
        if (x==a[mid]){
            cout<<"the posiiton of the element is"<< mid+1;
            return;
        }
        else if (x<a[mid]){
            max=mid-1;
        }
        else{
            min=mid+1;
    }
    }
}

int main(){
    
    int a[5]={1,2,3,4,5};
    int n=5;
    int min=0;
    int max=n-1;
    int x=4;
    binary(a, min, max, x);
    
}
