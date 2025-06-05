
#include <iostream>
using namespace std;

int binarysearch(int arr[], int x, int n){
    
    int left=0;
    int right=n-1;
    
    while(left<=right){
        int mid=(left+right)/2;
        if(left==right){
            
            if(arr[left]>=x){
            return left;        
        }}
        else if(arr[mid]<x){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    return -1;
}

int main()
{
    int arr[]={3,5,8,15,19};
    int x=9;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binarysearch(arr,x,n);

    return 0;
}
