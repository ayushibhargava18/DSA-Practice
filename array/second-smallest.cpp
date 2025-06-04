#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={12,23,45,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int smallest=arr[0];
    int secondsmallest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        else{
            continue;
        }
}
    for(int i=1;i<n;i++){
        if(arr[i]<secondsmallest){
            if(arr[i]!=smallest){
                secondsmallest=arr[i];
            }
        }
        else{
            continue;
        }
}
cout<<secondsmallest;
}
