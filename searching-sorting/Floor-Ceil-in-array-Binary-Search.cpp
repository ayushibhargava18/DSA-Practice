
#include <iostream>
using namespace std;

void binarysearch(int arr[], int x, int n){
    
    int left=0;
    int right=n-1;
    
    while(left<=right){
        int mid=(left+right)/2;
        if (arr[mid]==x){
            cout<<"ceil==floor== "<<arr[mid];
            return;
        }
        else if(left==mid){
                cout<<arr[left];
                cout<<arr[right];
            return;
        }
        else if(arr[mid]<x){
            left=mid;
        }
        else{
            right=mid;
        }
    }

}

int main()
{
    int arr[]={3, 4, 4, 7, 8, 10};
    int x=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    binarysearch(arr,x,n);

    return 0;
}
