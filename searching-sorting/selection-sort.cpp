#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={54, 12, 65, 43, 11};
    int n= sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<=n-1; i++){
        int k=i;
        for(int j=i+1; j<=n-1;j++){
             if(arr[j]<arr[k]){
                 k=j;
             }
             }
        swap(arr[i],arr[k]);
        }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<"\n";
    }
        
}
    
