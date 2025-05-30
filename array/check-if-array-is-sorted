#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={2,12,23,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            continue;
        }
        else{
            flag=false;
        }
    }
    if(flag==true){
        cout<<"Sorted";
    }
    else{
        cout<<"unsorted";
    }
}
