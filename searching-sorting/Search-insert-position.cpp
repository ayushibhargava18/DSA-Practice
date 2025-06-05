
#include <iostream>
using namespace std;

int binarysearch(int arr[], int x, int n){
    
    int left=0;
    int right=n-1;
    
    while(left<=right){
        int mid=(left+right)/2;
        
        if(x==arr[mid]){
            return mid;        
        }
        
        else if(arr[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return left;
}

int main()
{
    int arr[]={10,20,40,70};
    int x=15;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binarysearch(arr,x,n);

    return 0;
}
