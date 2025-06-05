
#include <iostream>
using namespace std;

int binarysearch(int arr[], int target, int n){
    
    int left=0;
    int right=n-1;
    
    while(left<=right){
        int mid=(left+right)/2;
        if(target==arr[mid]){
            return mid;        
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={3, 4, 6, 7, 9, 12, 16, 17};
    int target=6;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binarysearch(arr,target,n);

    return 0;
}
