#include <iostream>
using namespace std;

int test(int arr[], int n){
    int count=0;
    int maxcount=0;
    for(int i=0;i<n;i++){More actions
        if(arr[i]==1){
            count++;
            if(count>maxcount){
                maxcount=count;
            }
        }
        else{
            count=0;
        }
    }
    return maxcount;
}

int main(){
   
    int arr[]={1,0,1,1,0,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<test(arr,n);

    return 0;
}
