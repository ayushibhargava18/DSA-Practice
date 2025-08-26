
#include <iostream>
using namespace std;

void rearrange(int array[], int arr[], int n){
    int pos=0;
    int neg=1;
    for(int i=0; i<n;i++){
        if(arr[i]>0){
            array[pos]=arr[i];
            pos=pos+2;
            
        }
        else{
            array[neg]=arr[i];
            neg=neg+2;
        }
    }
    for(int i=0; i<n;i++){
        cout<<array[i];
    }
    
}

int main()
{
    int arr[]={1,2,-4,-5};

    int n=sizeof(arr)/sizeof(arr[0]);
    int array[n];
    rearrange(array, arr, n);
    return 0;
}
