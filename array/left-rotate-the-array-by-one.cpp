
#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=arr[0];
    int k=0;
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=j;
    for(int l=0;l<n;l++){
        cout<<arr[l]<<" ";
    }
    return 0;
}
