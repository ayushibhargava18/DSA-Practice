#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={12,23,45,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<n-1;i++){
        int current=i;
        int prev=i-1;
        while(arr[current]<arr[prev]){
            arr[prev+1]=arr[prev];
            prev--;
        }
        swap(arr[prev],arr[current]);
    }
   
    for(int k=0;k<n;k++){
        cout<<arr[k]<<"\n";
    }
}
