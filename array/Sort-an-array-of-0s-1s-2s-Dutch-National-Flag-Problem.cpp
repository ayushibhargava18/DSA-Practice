#include <iostream>
using namespace std;


    
    void dutch(int arr[], int n){
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else if(arr[mid]==2){
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }



int main(){
    int arr[]={2,0,2,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    dutch(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
