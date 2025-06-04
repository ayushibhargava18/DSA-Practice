

#include <iostream>
using namespace std;

int missing(int arr[], int n, int count){
    
    
    for(int i=0;i<n-1;i++){
        if(arr[i]==count){
            count++;
        }
        else{
            return count;
        }
    }
}
    


int main(){
    int n=10;
    int arr[n-1]={1,2,3,4,5,6,7,9,10};
    int count=1;
    cout<<missing(arr,n,count);

    return 0;
}
